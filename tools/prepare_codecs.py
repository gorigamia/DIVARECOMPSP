"""Install the already downloaded LGPL FFmpeg SDK into this project only."""
import hashlib
import json
from pathlib import Path, PurePosixPath
import zipfile

ROOT = Path(__file__).resolve().parents[1]
archive = ROOT / 'local/deps/ffmpeg-lgpl-shared.zip'
target = ROOT / 'third_party/ffmpeg'
with zipfile.ZipFile(archive) as source:
    for entry in source.infolist():
        path = PurePosixPath(entry.filename)
        if entry.is_dir() or len(path.parts) < 2:
            continue
        relative = Path(*path.parts[1:])
        if '..' in relative.parts:
            raise ValueError('Unsafe SDK path')
        if relative.parts[0] not in ('bin', 'include', 'licenses') and relative.name.lower() not in ('license.txt', 'readme.txt'):
            continue
        if relative.parts[0] == 'bin' and relative.suffix != '.dll':
            continue
        output = target / relative
        output.parent.mkdir(parents=True, exist_ok=True)
        output.write_bytes(source.read(entry))
provenance = {'source': 'https://github.com/FFmpeg-Builds/FFmpeg-Builds/releases/download/latest/ffmpeg-n8.1-latest-win64-lgpl-shared-8.1.zip',
              'archive_sha256': hashlib.sha256(archive.read_bytes()).hexdigest(), 'license_variant': 'lgpl-shared',
              'libraries': ['avcodec-62', 'avformat-62', 'avutil-60', 'swresample-6', 'swscale-9']}
(target / 'PROVENANCE.json').write_text(json.dumps(provenance, indent=2), encoding='utf-8')
print('Local FFmpeg SDK prepared:', target)
