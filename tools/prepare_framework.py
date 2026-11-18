"""Prepare the pinned PSPRecomp source from an offline GitHub ZIP."""
import argparse
import hashlib
import json
from pathlib import Path, PurePosixPath
import subprocess
import zipfile

ROOT = Path(__file__).resolve().parents[1]
REVISION = 'f6e7d415c7f447b934cc3865a31eb725f353d659'
DEST = ROOT / 'third_party/kon_base/third_party/PSPRecomp'
PATCH = ROOT / 'third_party/kon_base/patches/psprecomp/kon-port.patch'


def main(archive):
    marker = DEST / 'offline-provenance.json'
    if DEST.exists():
        if marker.exists():
            print('Framework already prepared; leaving source unchanged.')
            return
        raise SystemExit('Destination exists without provenance; refusing to overwrite it.')
    with zipfile.ZipFile(archive) as z:
        # GitHub records the commit in the archive comment; require that evidence.
        if z.comment.decode('ascii').strip() != REVISION:
            raise SystemExit('ZIP commit comment does not match the pinned revision.')
        prefix = 'PSPRecomp-' + REVISION
        entries = []
        for entry in z.infolist():
            path = PurePosixPath(entry.filename)
            if path.parts[0] != prefix or '..' in path.parts or '\\' in entry.filename:
                raise SystemExit('Unexpected archive path')
            rel = Path(*path.parts[1:])
            # Preserve the framework and tools, not profiles of unrelated games.
            if not rel.parts or rel.parts[0] == 'profiles' or entry.is_dir():
                continue
            entries.append((entry, rel))
        DEST.mkdir(parents=True)
        for entry, rel in entries:
            target = DEST / rel
            target.parent.mkdir(parents=True, exist_ok=True)
            target.write_bytes(z.read(entry))
    patch = PATCH.read_bytes().replace(b'\r\n', b'\n')
    for flags in (['--check'], []):
        subprocess.run(['git', 'apply', '--whitespace=nowarn', *flags, '-'],
                       input=patch, cwd=DEST, check=True)
    subprocess.run(['git', 'apply', '--reverse', '--check', '-'],
                   input=patch, cwd=DEST, check=True)
    record = {'revision': REVISION, 'archive': archive.name,
              'archive_sha256': hashlib.sha256(archive.read_bytes()).hexdigest(),
              'patch_sha256': hashlib.sha256(patch).hexdigest(),
              'patch_applied_and_reverse_checked': True, 'profiles_excluded': True}
    marker.write_text(json.dumps(record, indent=2), encoding='utf-8')
    print(json.dumps(record, indent=2))


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('zip', type=Path)
    main(parser.parse_args().zip)
