"""Inspect a PSP ISO9660 image without mounting or modifying it (Python 3.9+)."""
import argparse
import hashlib
import json
import struct
from pathlib import Path

SECTOR = 2048


def inspect(path, output):
    with path.open('rb') as f:
        def read(offset, size):
            f.seek(offset)
            data = f.read(size)
            if len(data) != size:
                raise ValueError('Truncated ISO')
            return data

        pvd = read(16 * SECTOR, SECTOR)
        if pvd[:7] != b'\x01CD001\x01':
            raise ValueError('Not an ISO9660 primary volume descriptor')
        files = []
        visited = set()

        def walk(record, prefix=''):
            lba = struct.unpack_from('<I', record, 2)[0]
            size = struct.unpack_from('<I', record, 10)[0]
            if (lba, size) in visited:
                raise ValueError('Repeated directory extent')
            visited.add((lba, size))
            data = read(lba * SECTOR, size)
            pos = 0
            while pos < size:
                length = data[pos]
                if not length:
                    pos = (pos // SECTOR + 1) * SECTOR
                    continue
                rec = data[pos:pos + length]
                if len(rec) < 34:
                    raise ValueError('Invalid directory record')
                name = rec[33:33 + rec[32]]
                pos += length
                if name in (b'\x00', b'\x01'):
                    continue
                name = name.decode('ascii').split(';')[0]
                full = prefix + name
                if rec[25] & 2:
                    walk(rec, full + '/')
                else:
                    files.append({'path': full, 'lba': struct.unpack_from('<I', rec, 2)[0],
                                  'size': struct.unpack_from('<I', rec, 10)[0]})

        walk(pvd[156:190])
        important = {}
        for item in files:
            if item['path'] in ('PSP_GAME/PARAM.SFO', 'PSP_GAME/SYSDIR/EBOOT.BIN', 'PSP_GAME/SYSDIR/BOOT.BIN', 'UMD_DATA.BIN'):
                data = read(item['lba'] * SECTOR, item['size'])
                info = dict(item, sha256=hashlib.sha256(data).hexdigest(), magic=data[:4].hex())
                if item['path'].endswith('PARAM.SFO') and data[:4] == b'\x00PSF':
                    _, _, keys, values, count = struct.unpack_from('<5I', data)
                    fields = {}
                    for i in range(count):
                        key, fmt, length, _, offset = struct.unpack_from('<HHIII', data, 20 + i * 16)
                        end = data.index(b'\0', keys + key)
                        label = data[keys + key:end].decode('utf-8')
                        value = data[values + offset:values + offset + length]
                        fields[label] = int.from_bytes(value, 'little') if fmt == 0x0404 else value.rstrip(b'\0').decode('utf-8', 'replace')
                    info['fields'] = fields
                important[item['path']] = info
        result = {'iso': str(path.resolve()), 'size': path.stat().st_size,
                  'volume': pvd[40:72].decode('ascii').strip(), 'file_count': len(files),
                  'important': important, 'files': files}
        output.parent.mkdir(parents=True, exist_ok=True)
        output.write_text(json.dumps(result, indent=2, ensure_ascii=False), encoding='utf-8')
        print(json.dumps({k: v for k, v in result.items() if k != 'files'}, indent=2, ensure_ascii=True))


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('iso', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    inspect(args.iso, args.output)
