# Project DIVA PSP (ULJM05472) — Native Recompilation (Prototype)

A work-in-progress **static recompilation** prototype of *Hatsune Miku: Project DIVA* (PSP, first game, Japanese release **ULJM05472**) targeting **Windows x64**.

This project translates the original game code ahead-of-time into native C++ and runs it with a custom PSP runtime layer (graphics, audio, input, file/media services, etc.). It is **not** an emulator and it does **not** include any original game data.

> **Status:** early/technical prototype. Boot, menus, opening video/audio playback, and a verified *World is Mine (NORMAL)* clear run (with synthetic diagnostic input) have been observed. Full compatibility across all songs, modes, editors, multiplayer, and save flows is **not** yet validated.

## Legal notice (important)

- **Bring your own original game disc image (ISO).** This repository does **not** contain copyrighted game assets, executables from the game disc, or decrypted game data.
- Only the **Japanese ULJM05472** image/profile is currently supported by this prototype flow. Other editions/translations (including English-patched images) are not compatible with the current profile.
- This is an unofficial fan/technical project and is not affiliated with SEGA, Crypton Future Media, Sony, or any rights holders.
- Third-party components and base projects keep their own licenses; see [LICENSE](LICENSE), [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md), and files under `src/`, `third_party/`, and `docs/`.

## What has been verified (local evidence)

Based on the project’s recorded local validation milestones (see `docs/EXECUCAO.md`, `docs/BOOT.md`):

- **Boot/title/menu:** native AOT execution reaches the original title screen and enters menus.
- **Opening movie:** PSMF video/audio path (H.264 + ATRAC3+ via local FFmpeg LGPL SDK integration) plays and returns to title in tested runs.
- **Gameplay sample:** *World is Mine / NORMAL* completed to **CLEAR / GREAT** in a long diagnostic run using **synthetic controller input** (not a measurement of physical input latency).
- **Save service checks:** atomic write/reload/metadata/icon handling and rejection of corrupted/short buffers passed in service-level tests (in-game save flow still requires broader validation).
- **Kernel/service tests:** additional synchronization/thread/event behavior covered by local verification binaries/tests.

These results are environment-specific development evidence, not a compatibility guarantee.

## Current limitations

- Japanese ULJM05472 profile only (current launcher/preparation flow rejects incompatible executables/editions).
- CPU-based renderer prototype (no claim of full GPU-accurate behavior yet).
- Not all songs/difficulties/modes/editors/multiplayer flows validated.
- Audio/video timing fidelity against real PSP hardware not fully measured.
- In-game save/load UX flow not fully validated despite service-level tests.
- Custom MP3 and multiplayer features not validated.
- Documentation in `docs/` contains historical development notes (some in Portuguese) and local evidence references.

## What’s missing to make the project good

This is a prototype; the following work is needed to move it toward a solid, user-testable release:

- **Compatibility coverage:** validate all songs, difficulties, and game modes (including edit mode, PV/movie-related flows, menus, and edge cases) on the supported ULJM05472 profile.
- **In-game save/load:** fully validate real in-game save creation, loading, and progression flows (service-level checks pass, but end-to-end UX is not yet proven).
- **Timing and A/V fidelity:** measure and improve audio/video synchronization and gameplay timing/latency against real PSP behavior (including physical controller input latency, not just synthetic diagnostic input).
- **Renderer quality and performance:** evolve from the CPU-based prototype toward a more accurate and faster renderer (correctness, visual parity, GPU acceleration where appropriate).
- **Stability and diagnostics:** reduce crashes/hangs, improve error messages/logging for users, and make behavior more deterministic across different Windows PCs/GPUs/drivers.
- **Feature validation:** verify custom MP3/import-related behavior and any multiplayer/ad-hoc/network features (currently unvalidated).
- **Build and release quality:** reproducible build/toolchain setup, CI for builds/tests, packaged test releases, and clearer installation/runtime troubleshooting for testers.
- **Documentation:** consolidate and translate/clean historical development docs, and provide a clear user guide (supported setup, controls, known issues, how to report bugs with logs).
- **Testing infrastructure:** automated regression tests for runtime/services and scripted gameplay checks where feasible to prevent regressions as compatibility improves.

## Repository layout

- `src/` — launcher, runtime, framework extensions, verification tools
- `generated/japan/` — generated AOT C++ corpus and registry for the measured Japanese profile
- `tools/` — build/generation/launch/preparation scripts
- `config/` — profile, controls, and settings
- `assets/` — UI assets (cover/UMD images used by settings menu)
- `docs/` — technical notes and validation reports
- `third_party/` — base/runtime dependencies and bundled third-party components (K-On base snapshot, eboot decrypt tooling, FFmpeg SDK files as included, etc.)
- `CMakeLists.txt` — CMake build for launcher/codegen/analyzer/runtime targets

Not included (by design): original ISOs, extracted game assets, decrypted EBOOT/ELF from disc, local caches, build outputs, personal save data, and large local evidence artifacts.

## Running (test build / launcher flow)

A Windows x64 test build (prototype) is included under `build/diva/` for convenience so testers do not need to compile first. The ISO preparation step also requires the included executable preparer at `build/decrypt-llvm/eboot_decrypt.exe` (with `libc++.dll` and `libunwind.dll` beside it).

1. Run `Jogar-DIVA.cmd` (Windows) or `build/diva/diva_launcher.exe`.
2. Select your original **Japanese ULJM05472** ISO when prompted.
3. The launcher/preparation flow verifies the disc/profile, prepares a per-disc cache, and starts the native executable.
4. On first use, preparation/extraction can take time; subsequent runs reuse verified cached data.

Notes:
- **Windows x64 only.** The included binaries were built with LLVM/MinGW tooling; if the app fails to start, install/update the Microsoft Visual C++ runtime and ensure required DLLs in `build/diva/` and `third_party/ffmpeg/bin/` are present (Git LFS must be pulled).
- **Python 3.9+** is required for the launcher’s preparation step (`tools/prepare_launch.py` is invoked via `py -3.9`).
- `tools/play.ps1` supports launcher/direct-boot development modes (see `docs/LAUNCHER.md`).
- Runtime/config paths and cache behavior are documented in `docs/LAUNCHER.md` and `docs/CONFIGURACOES.md`.
- This is a prototype test build: expect bugs, missing compatibility, and incomplete features (see limitations/roadmap above). Please report issues with logs and reproduction steps.

## Building (high-level)

> Exact toolchain setup may vary by machine. This project was developed on Windows with LLVM/MinGW-based tooling and CMake-generated MinGW makefiles.

### Prerequisites (typical)

- Windows x64
- CMake
- Clang/LLVM (and compatible MinGW runtime/libs as used by the project build scripts)
- Python 3.9+ (used by helper scripts in `tools/`)
- PowerShell (for provided `.ps1` scripts)
- Git + Git LFS (for cloning/pushing this repo with large binaries/assets)

### Key components

- **PSPRecomp** framework (pinned revision used by the base project) — prepared into `third_party/kon_base/third_party/PSPRecomp` via the project’s offline/preparation workflow (see `tools/prepare_framework.py` and base project scripts/docs).
- **Generated AOT corpus** in `generated/japan/` (already included in this snapshot for the measured profile).
- **FFmpeg (LGPL shared) SDK binaries/headers** under `third_party/ffmpeg` (used for opening/media decoding path in this prototype).

### Example build commands (as used by project scripts)

```powershell
# Configure/build tools and runtime targets (project-specific)
.\tools\build_game.ps1

# Optional: regenerate AOT corpus only when needed/profile inputs are available
.\tools\build_game.ps1 -Regenerate
```

See also:
- `tools/build_framework.ps1`
- `tools/generate_game.ps1`
- `tools/prepare_framework.py`
- `tools/prepare_codecs.py`
- `docs/BASE_TECNICA.md`, `docs/BOOT.md`

## Git LFS (large files / GitHub upload readiness)

This repository is prepared for **Git LFS** to handle large/binary files (e.g. DLLs, executables, archives, images/media assets) and avoid GitHub file-size/upload issues.

After cloning:

```bash
git lfs install
git lfs pull
```

Tracked patterns are defined in `.gitattributes` (binaries, images, archives, and selected game/binary formats). If you add new large binaries, make sure they are covered by LFS patterns before committing.

## Credits and base projects

This adaptation builds on and/or references prior work including:

- [K-On! Houkago Live!! Recompiled](https://github.com/EDGX73/KOn-Houkago-Live-Recompiled) — primary adaptation base/runtime lineage used for this project snapshot
- [PSPRecomp](https://github.com/NobleDrew/PSPRecomp) (pinned revision in base workflow) — static recompilation framework/tooling
- [PPSSPP](https://github.com/hrydgard/ppsspp) — referenced for PSP behavior/format understanding in development
- [FFmpeg](https://ffmpeg.org/) — media decoding components (LGPL shared SDK used here)
- `eboot_decrypt` tooling provenance retained under `third_party/eboot_decrypt/`

Additional reference projects studied during investigation are listed in `docs/BASE_TECNICA.md` and historical project notes; full extracted reference archives are intentionally omitted from this GitHub snapshot (see `references/README.md`).

## Disclaimer

This prototype is provided for research/preservation/interoperability experimentation purposes. Compatibility, performance, and correctness are incomplete. Use only with legally obtained copies of software you own.
