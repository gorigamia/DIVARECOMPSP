"""Bounded native DIVA boot run with durable diagnostic output."""
import argparse
import json
from pathlib import Path
import subprocess
import time
import shutil
import os
from datetime import datetime

ROOT = Path(__file__).resolve().parents[1]


def main(seconds, window, replay, output=None, userdata=None, mute=False, capture_interval=0,
         logic_fps=None, internal_scale=None, gpu=False):
    folder = (output or ROOT / 'local/boot').resolve()
    folder.relative_to(ROOT)
    folder.mkdir(parents=True, exist_ok=True)
    if (folder / 'run.json').exists():
        history = folder / 'history' / datetime.now().strftime('%Y%m%d-%H%M%S-%f')
        history.mkdir(parents=True)
        for name in ('run.log','run.json','frame.bmp','frame.png'):
            if (folder / name).exists():
                shutil.copy2(folder / name, history / name)
    (folder / 'frame.bmp').unlink(missing_ok=True)
    (folder / 'run.json').unlink(missing_ok=True)
    (folder / 'frame.png').unlink(missing_ok=True)
    command = [str(ROOT / 'build/diva/diva_boot.exe'), '--root', str(ROOT),
               '--language', 'ja', '--bootstrap',
               '--max-runtime-ms', str(seconds * 1000),
               '--max-dispatches', '1000000000',
               '--capture-frame', str(folder / 'frame.bmp')]
    if gpu:
        command += ['--vulkan-raster']
    else:
        command += ['--cpu-renderer']
    if logic_fps:
        command += ['--logic-fps', str(logic_fps)]
    if internal_scale:
        command += ['--internal-scale', str(internal_scale)]
    if window:
        command += ['--show-test-window']
    if replay:
        command += ['--input-replay', str(replay.resolve())]
    if userdata:
        command += ['--userdata', str(userdata.resolve())]
    if mute:
        command += ['--mute-audio']
    if capture_interval:
        command += ['--capture-interval-ms', str(capture_interval)]
    start = time.monotonic()
    timed_out = False
    with (folder / 'run.log').open('w', encoding='utf-8') as log:
        process = subprocess.Popen(command, cwd=ROOT, stdout=log, stderr=subprocess.STDOUT,
                                   creationflags=subprocess.CREATE_NO_WINDOW)
        try:
            code = process.wait(timeout=seconds + 20)
        except subprocess.TimeoutExpired:
            timed_out = True
            process.kill()
            code = process.wait()
    lines=(folder / 'run.log').read_text(encoding='utf-8',errors='replace').splitlines()
    reasons=[line.split('=',1)[1] for line in lines if line.startswith('worker_stop=')]
    reason=reasons[-1] if reasons else None
    passed=not timed_out and code==2 and reason=='Diagnostic runtime limit reached'
    record = {'command': command, 'exit_code': code, 'timeout': timed_out,
              'wall_seconds': round(time.monotonic() - start, 2),
              'stop_reason':reason,'expected_timed_stop':passed,
              'frame_captured':(folder / 'frame.bmp').exists(),
              'synthetic_autoplay': bool(os.environ.get('DIVA_DIAGNOSTIC_AUTOPLAY')),
               'audio_muted': mute,'logic_fps': logic_fps,'internal_scale': internal_scale,'gpu_raster': gpu}
    (folder / 'run.json').write_text(json.dumps(record, indent=2), encoding='utf-8')
    print(json.dumps(record, indent=2))
    prefixes=('worker_stop=','module_stop=','missing_','native_elapsed_ms=','frame_capture=','Diagnostic failed:')
    print('\n'.join(line for line in lines if line.startswith(prefixes)))
    return 0 if passed else 1


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--seconds', type=int, default=12)
    parser.add_argument('--window', action='store_true')
    parser.add_argument('--replay', type=Path)
    parser.add_argument('--output', type=Path)
    parser.add_argument('--userdata', type=Path)
    parser.add_argument('--mute', action='store_true')
    parser.add_argument('--capture-interval-ms', type=int, default=0)
    parser.add_argument('--logic-fps', type=int)
    parser.add_argument('--internal-scale', type=int)
    parser.add_argument('--gpu', action='store_true', help='use Vulkan raster instead of the deterministic CPU renderer')
    args = parser.parse_args()
    if not 1 <= args.seconds <= 900:
        parser.error('seconds must be between 1 and 900')
    if args.logic_fps and not 30 <= args.logic_fps <= 240:
        parser.error('logic-fps must be between 30 and 240')
    if args.internal_scale and not 1 <= args.internal_scale <= 4:
        parser.error('internal-scale must be between 1 and 4')
    raise SystemExit(main(args.seconds, args.window, args.replay,args.output,args.userdata,args.mute,
                          args.capture_interval_ms,args.logic_fps,args.internal_scale,args.gpu))
