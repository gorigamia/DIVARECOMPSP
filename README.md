# Project DIVA PSP (ULJM05472) — Native Recompilation (Prototype)

A work-in-progress **static recompilation** prototype of *Hatsune Miku: Project DIVA* (PSP, first game, disc ID **ULJM05472**) targeting **Windows x64**. Both the original Japanese image and the community English v1.0 translation of that same game are supported as separate content profiles.

This project translates the original game code ahead-of-time into native C++ and runs it with a custom PSP runtime layer (graphics, audio, input, file/media services, etc.). It is **not** an emulator and it does **not** include any original game data.

> **Status:** early/technical prototype. Boot, menus, opening video/audio playback, and a verified *World is Mine (NORMAL)* clear run (with synthetic diagnostic input) have been observed. Full compatibility across all songs, modes, editors, multiplayer, and save flows is **not** yet validated.

## Legal notice (important)

- **Bring your own original game disc image (ISO).** This repository does **not** contain copyrighted game assets, executables from the game disc, or decrypted game data.
- Only the two inspected **ULJM05472** images are supported: the original Japanese "Japan, Asia" disc and the community **English v1.0** translation of that disc. Other editions, sequels and unrelated translations are not compatible. The English content comes from the ISO you supply; it is not included here.
- This is an unofficial fan/technical project and is not affiliated with SEGA, Crypton Future Media, Sony, or any rights holders.
- Third-party components and base projects keep their own licenses; see [LICENSE](LICENSE), [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md), and files under `src/`, `third_party/`, and `docs/`.

## What has been verified (local evidence)

Based on the project’s recorded local validation milestones (see `docs/EXECUCAO.md`, `docs/BOOT.md`):

- **Boot/title/menu:** native AOT execution reaches the original title screen and enters menus on both supported content profiles; the English v1.0 ISO profile was smoke-tested after preparation (title/menu render with the translated assets).
- **Opening movie:** PSMF video/audio path (H.264 + ATRAC3+ via local FFmpeg LGPL SDK integration) plays and returns to title in tested runs.
- **Gameplay sample:** *World is Mine / NORMAL* completed to **CLEAR / GREAT** in a long diagnostic run using **synthetic controller input** (not a measurement of physical input latency).
- **Save service checks:** atomic write/reload/metadata/icon handling and rejection of corrupted/short buffers passed in service-level tests. **LOAD GAME** opens the save list without closing the project and loads the player's saved data when present; no save is created automatically, so with no saved data the game reports its absence for the player to pick another slot or see the no-save message. Full in-game save flow still requires broader validation.
- **Kernel/service tests:** additional synchronization/thread/event behavior covered by local verification binaries/tests.

These results are environment-specific development evidence, not a compatibility guarantee.

## Current limitations

- Only the Japanese ULJM05472 and English v1.0 translation content profiles are prepared/validated; other ISOs and game titles are rejected by the launcher.
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

A Windows x64 test build (prototype) is included under `build/diva/` for convenience so testers do not need to compile first. `Jogar-DIVA.exe` at the archive root is the same native launcher as `build/diva/diva_launcher.exe`, so it can be started with a double-click (no `.cmd` needed). The ISO preparation step also requires the included executable preparer at `build/decrypt-llvm/eboot_decrypt.exe` (with `libc++.dll` and `libunwind.dll` beside it).

1. Double-click `Jogar-DIVA.exe` (or run `Jogar-DIVA.cmd` / `build/diva/diva_launcher.exe`).
2. Select either your original **Japanese ULJM05472** ISO or the **English v1.0** translation ISO when prompted.
3. The launcher/preparation flow identifies the disc by hash, verifies the profile, prepares a per-disc cache, and starts the native executable.
4. Each ISO has its own verified cache and language profile; to switch language, run the launcher again and pick the other ISO. Do not rely on the in-game **F1 > Language** row to swap profiles: the packaged launcher always starts the profile of the ISO you selected.
5. On first use, preparation/extraction can take time; subsequent runs reuse verified cached data.

Notes:
- **Windows x64 only.** The included binaries were built with LLVM/MinGW tooling; if the app fails to start, install/update the Microsoft Visual C++ runtime and ensure required DLLs in `build/diva/` and `third_party/ffmpeg/bin/` are present (Git LFS must be pulled).
- **Python 3.9+** is required for the launcher’s preparation step (`tools/prepare_launch.py` is invoked via `py -3.9`).
- `tools/play.ps1` supports launcher/direct-boot development modes (see `docs/LAUNCHER.md`).
- Runtime/config paths and cache behavior are documented in `docs/LAUNCHER.md` and `docs/CONFIGURACOES.md`.
- This is a prototype test build: expect bugs, missing compatibility, and incomplete features (see limitations/roadmap above). Please report issues with logs and reproduction steps.

### Display, frame rate and image smoothing

The included build now exposes the frame-rate and display settings in `config/settings.ini` (and in the in-game Graphics/Settings menu):

```ini
logic_fps=60       # 30 (original) to 240; game speed stays the same
ui_aspect=1        # 0 original PSP, 1 16:9, 2 4:3, 3 fill the screen
ui_scaling=1       # 0 sharp/pixelated, 1 smooth filtering, 2 integer scaling
```

- `logic_fps=60` makes the runtime advance the game clock in 60 Hz steps instead of 30 Hz while keeping songs, animations and judgment at the original speed. The 60 FPS clock is now applied to DIVA even with the CPU renderer (it was previously only active in the Vulkan path). The game's VBlank interrupt is paced at twice the logic rate, so menus/song timing are unchanged. The in-game FPS row changes this value immediately and saves it.
- `ui_aspect=1` presents the 480x272 frame in 16:9, with letterboxing on 4:3/older monitors and full-width output on widescreen displays. `ui_aspect=0` keeps the original PSP framing, `2` is 4:3 and `3` stretches to fill.
- `ui_scaling=1` uses smooth (HALFTONE) filtering when enlarging the image, which softens jagged edges ("serrilhados"). `0` keeps hard pixels and `2` uses integer scaling. `internal_scale=2` only applies when the Vulkan/GPU renderer is enabled; the shipped build still uses the CPU renderer at the original internal resolution.

Validation: 30 s of diagnostic replay at `logic_fps=60` completed with no missing assets or failures; audio frames advanced at the original rate (within ~0.3% of the 30 FPS baseline at 25 s). The FPS setting is saved and restored on the next launch.

### Timing calibration (important for rhythm play)

The automated clear test used synthetic input that read each note's remaining time directly from game memory; it proved the input path works, but it did **not** measure real keyboard/controller timing against the audio. If you hit the beat but the game judges you as late, add this line to `config/settings.ini`:

```ini
input_offset_ms=40
```

Positive values backdate your inputs so the game treats a press as happening earlier (try `20`, `40`, `60`, ...). Use a negative value if presses are judged too early. Default is `0`. The environment variable `KON_INPUT_OFFSET_MS` overrides the file for a single run. Each launch prints `input_offset_ms=<value>` in the interactive log under `analysis/native_interactive_ja.log` inside the prepared disc cache.

### Save/load dialog

Selecting **LOAD GAME** no longer closes the app: `sceUtilitySavedataInitStart` now accepts the list/numbered-save modes DIVA uses (`2`, `4`, `5`, `6`, `7`, `10`, `11`, `13`) and keeps the selected slot name for the following `GetStatus`/`Update`/`Shutdown` calls. A diagnostic replay that presses Triangle on the load screen twice completed without a crash and reached those modes. The save service test (`diva_savedata_verify`) passes, including LISTLOAD selection/absence and preservation of the original PSP save bytes. No save is created automatically: **LOAD GAME** loads the save you actually played and saved; with nothing saved it reports the absence / opens the save choice instead of showing a black screen, returning to the title, or leaving the song list empty.

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
