"""Extract the inspected DIVA disc for the native file service (no mounting)."""
import argparse
import json
from pathlib import Path, PurePosixPath
from inspect_iso import inspect

ROOT = Path(__file__).resolve().parents[1]


def main(iso):
    report = ROOT / 'local/japan/iso.json'
    inspect(iso, report)
    data = json.loads(report.read_text(encoding='utf-8'))
    if data['important']['PSP_GAME/PARAM.SFO']['fields']['DISC_ID'] != 'ULJM05472':
        raise SystemExit('Wrong DIVA disc ID')
    dest = ROOT / 'analysis/extracted/jp'
    with iso.open('rb') as source:
        for entry in data['files']:
            rel = PurePosixPath(entry['path'])
            if rel.is_absolute() or '..' in rel.parts:
                raise ValueError('Unsafe disc path')
            path = dest.joinpath(*rel.parts)
            path.parent.mkdir(parents=True, exist_ok=True)
            source.seek(entry['lba'] * 2048)
            remaining = entry['size']
            with path.open('wb') as out:
                while remaining:
                    block = source.read(min(4 * 1024 * 1024, remaining))
                    if not block:
                        raise ValueError('Truncated ISO')
                    out.write(block)
                    remaining -= len(block)
            print(entry['path'], entry['size'])


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('iso', type=Path)
    main(parser.parse_args().iso)
