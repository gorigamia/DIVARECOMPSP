"""Prepare and analyze a local DIVA ISO using the compiled native tools."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
from inspect_iso import inspect

ROOT = Path(__file__).resolve().parents[1]


def main(iso, variant, toolchain):
    output = ROOT / 'local' / variant
    output.mkdir(parents=True, exist_ok=True)
    inspection = output / 'iso.json'
    inspect(iso, inspection)
    disc = json.loads(inspection.read_text(encoding='utf-8'))
    if disc['important']['PSP_GAME/PARAM.SFO']['fields']['DISC_ID'] != 'ULJM05472':
        raise SystemExit('Not the selected DIVA disc ID')
    elf = output / 'EBOOT.ELF'
    suffix = '-llvm' if toolchain == 'llvm' else '/Release'
    decrypt = ROOT / ('build/decrypt' + suffix) / 'eboot_decrypt.exe'
    analyzer = ROOT / ('build/framework' + suffix) / 'psp_analyze.exe'
    subprocess.run([str(decrypt), str(iso.resolve()), str(elf)], check=True)
    if elf.read_bytes()[:6] != b'\x7fELF\x01\x01':
        raise SystemExit('Expected a little-endian ELF32 executable')
    with (output / 'analyzer.log').open('w', encoding='utf-8') as log:
        subprocess.run([str(analyzer), str(elf), str(output / 'analysis.json')],
                       stdout=log, stderr=subprocess.STDOUT, check=True)
    print('ELF SHA-256:', hashlib.sha256(elf.read_bytes()).hexdigest())
    print('Analysis:', output / 'analysis.json')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('iso', type=Path)
    parser.add_argument('--variant', choices=['japan', 'english'], required=True)
    parser.add_argument('--toolchain', choices=['llvm', 'msvc'], default='llvm')
    args = parser.parse_args()
    main(args.iso, args.variant, args.toolchain)
