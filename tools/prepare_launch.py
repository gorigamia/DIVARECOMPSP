"""Validate the selected disc and prepare a verified, isolated native data cache."""
import argparse
import contextlib
import hashlib
import io
import json
import shutil
from pathlib import Path, PurePosixPath
import subprocess
import sys
import tempfile
import uuid
from inspect_iso import inspect

ROOT = Path(__file__).resolve().parents[1]
PROFILES = {
    '2f4aeea0afeeae0f001f2e4783aaeb41fca1f8b46eef0673d5774198821159ca': ('ja', 'jp', '5f65bb468d70fda949aeb07008c699e4e379e6f86d1d6627efd0b7abd0a0f289'),
    '785576c10a927050569bb1cc283798b4f6bb2ac6f4dc5f45d3c387e6ff04acc4': ('en', 'en', '785576c10a927050569bb1cc283798b4f6bb2ac6f4dc5f45d3c387e6ff04acc4'),
}
ENCRYPTED_TO_ELF = {values[2]: elf for elf, values in PROFILES.items()}


def progress(value, message):
    print('PROGRESS|{}|{}'.format(value, message), flush=True)


def prepare(iso):
    progress(0, 'Verificando a imagem do jogo...')
    if iso.suffix.lower() != '.iso' or not iso.is_file():
        raise ValueError('Selecione um arquivo ISO do primeiro Project DIVA para PSP.')
    cache_parent = ROOT / 'local/disc-cache'
    cache_parent.mkdir(parents=True, exist_ok=True)
    # Inspection reads the directory and executable, not the full disc into RAM.
    with tempfile.TemporaryDirectory(prefix='inspect-', dir=cache_parent) as temp_folder:
        report = Path(temp_folder) / 'iso.json'
        with contextlib.redirect_stdout(io.StringIO()):
            inspect(iso, report)
        data = json.loads(report.read_text(encoding='utf-8'))
    fields = data['important'].get('PSP_GAME/PARAM.SFO', {}).get('fields', {})
    if fields.get('DISC_ID') != 'ULJM05472':
        raise ValueError('Esta ISO nao e do primeiro Project DIVA (ULJM05472).')
    source_eboot = data['important']['PSP_GAME/SYSDIR/EBOOT.BIN']['sha256']
    if source_eboot not in ENCRYPTED_TO_ELF:
        raise ValueError('Esta edicao da ISO ainda nao e compativel. Use a versao japonesa ULJM05472 ou a traducao inglesa ULJM05472.')
    expected_elf = ENCRYPTED_TO_ELF[source_eboot]
    profile, folder, _ = PROFILES[expected_elf]
    progress(1, 'Identificando o disco selecionado...')
    iso_digest = hashlib.sha256()
    checked_bytes = 0
    iso_size = iso.stat().st_size
    with iso.open('rb') as source:
        for block in iter(lambda: source.read(4 * 1024 * 1024), b''):
            iso_digest.update(block)
            checked_bytes += len(block)
            progress(1 + int(9 * checked_bytes / iso_size), 'Identificando o disco selecionado...')
    key = iso_digest.hexdigest()
    destination = cache_parent / key
    entries = data['files']
    total = sum(entry['size'] for entry in entries)
    if not total:
        raise ValueError('A ISO nao contem arquivos do jogo.')
    paths = set()
    for entry in entries:
        path = PurePosixPath(entry['path'])
        if path.is_absolute() or any(part in ('..', '.') or ':' in part or '\\' in part for part in path.parts):
            raise ValueError('A ISO contem um caminho de arquivo invalido.')
        if entry['path'].lower() in paths:
            raise ValueError('A ISO contem caminhos duplicados.')
        paths.add(entry['path'].lower())
        if entry['lba'] * 2048 + entry['size'] > iso.stat().st_size:
            raise ValueError('A ISO esta incompleta.')
    manifest_path = destination / 'prepared.json'
    if manifest_path.is_file():
        manifest = json.loads(manifest_path.read_text(encoding='utf-8'))
        old_profile = PROFILES.get(manifest.get('executable'), ('', '', ''))[0]
        stored_profile = manifest.get('profile') or old_profile
        valid = manifest.get('version') in (1, 2) and manifest.get('executable') == expected_elf
        valid = valid and stored_profile == profile
        valid = valid and manifest.get('source_iso') == key and manifest.get('source_eboot') == source_eboot
        done = 0
        if valid:
            for entry in entries:
                file = destination / 'analysis/extracted' / folder / entry['path']
                expected = manifest.get('files', {}).get(entry['path'])
                if not expected or not file.is_file() or file.stat().st_size != entry['size']:
                    valid = False
                    break
                digest = hashlib.sha256()
                with file.open('rb') as source:
                    for block in iter(lambda: source.read(4 * 1024 * 1024), b''):
                        digest.update(block)
                        done += len(block)
                        progress(10 + int(40 * done / total), 'Conferindo arquivos preparados...')
                if digest.hexdigest() != expected:
                    valid = False
                    break
        elf = destination / 'local/japan/EBOOT.ELF'
        if valid and elf.is_file() and hashlib.sha256(elf.read_bytes()).hexdigest() == expected_elf:
            progress(98, 'Arquivos conferidos. Preparando o jogo...')
            return destination, profile
    extraction_begin = 50 if manifest_path.is_file() else 15
    progress(extraction_begin, 'Preparando o executavel da ISO selecionada...')
    # Nothing in the existing installation is changed until all validation succeeds.
    with tempfile.TemporaryDirectory(prefix='prepare-', dir=cache_parent) as temp_folder:
        staged = Path(temp_folder) / 'game'
        elf = staged / 'local/japan/EBOOT.ELF'
        elf.parent.mkdir(parents=True)
        decrypt = ROOT / 'build/decrypt-llvm/eboot_decrypt.exe'
        if not decrypt.is_file():
            raise ValueError('O preparador de executavel esta ausente nesta instalacao.')
        result = subprocess.run([str(decrypt), str(iso), str(elf)], capture_output=True,
                                creationflags=subprocess.CREATE_NO_WINDOW)
        if result.returncode or not elf.is_file():
            raise ValueError('Nao foi possivel preparar o executavel desta ISO.')
        if hashlib.sha256(elf.read_bytes()).hexdigest() != expected_elf:
            raise ValueError('Nao foi possivel confirmar o executavel desta edicao da ISO.')
        progress(extraction_begin, 'Carregando os arquivos do disco...')
        done = 0
        hashes = {}
        with iso.open('rb') as source:
            for entry in entries:
                output = staged / 'analysis/extracted' / folder / entry['path']
                output.parent.mkdir(parents=True, exist_ok=True)
                source.seek(entry['lba'] * 2048)
                remaining = entry['size']
                digest = hashlib.sha256()
                with output.open('wb') as target:
                    while remaining:
                        block = source.read(min(4 * 1024 * 1024, remaining))
                        if not block:
                            raise ValueError('Leitura incompleta da ISO.')
                        target.write(block)
                        digest.update(block)
                        done += len(block)
                        remaining -= len(block)
                        progress(extraction_begin + int((95 - extraction_begin) * done / total), 'Carregando ' + output.name)
                hashes[entry['path']] = digest.hexdigest()
        required = ['DivaDataList.afs', 'DivaSoundList.afs', 'DivaScriptList.afs']
        if any(not (staged / 'analysis/extracted' / folder / 'PSP_GAME/USRDIR/media/afs' / name).is_file() for name in required):
            raise ValueError('Os bancos de dados esperados nao foram encontrados na ISO.')
        manifest = {'version': 2, 'profile': profile, 'source_iso': key, 'source_eboot': source_eboot, 'executable': expected_elf, 'files': hashes}
        (staged / 'prepared.json').write_text(json.dumps(manifest, indent=2), encoding='utf-8')
        progress(97, 'Finalizando os arquivos do jogo...')
        if destination.exists():
            # A repaired data cache must not reset the player's native storage.
            for mutable in ('userdata', 'config'):
                previous = destination / mutable
                if previous.is_dir():
                    shutil.copytree(previous, staged / mutable)
            destination.rename(destination.with_name(key + '.previous-' + uuid.uuid4().hex))
        staged.rename(destination)
    return destination, profile


if __name__ == '__main__':
    sys.stdout.reconfigure(encoding='utf-8')
    parser = argparse.ArgumentParser()
    parser.add_argument('iso', type=Path)
    args = parser.parse_args()
    try:
        prepared, profile = prepare(args.iso.resolve())
        progress(100, 'Tudo pronto. Iniciando Project DIVA...')
        print('READY|' + str(prepared) + '|' + profile, flush=True)
    except Exception as error:
        print('ERROR|' + str(error).replace('\n', ' '), flush=True)
        raise SystemExit(1)
