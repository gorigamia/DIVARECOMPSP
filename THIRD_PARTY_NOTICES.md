# Third-Party Notices

This repository contains, adapts, or depends on third-party components and reference/base projects that remain under their respective licenses. This file summarizes key notices present in this snapshot; consult the linked/source files for full terms.

## Project base / adapted components

### K-On! Houkago Live!! Recompiled (base snapshot)
- **Location:** `third_party/kon_base/` (and adapted runtime/framework code in `src/` derived from that lineage)
- **License:** MIT (EDGX73) — see `third_party/kon_base/LICENSE` and `src/runtime/LICENSE-KON`
- **Note:** The upstream/base project targets a different game and includes its own third-party dependencies and notices. This repository is an adaptation/prototype for Project DIVA (ULJM05472) and preserves provenance notices where available.

### PSPRecomp (framework/tooling lineage)
- **Location:** prepared under `third_party/kon_base/third_party/PSPRecomp` (when using the project’s preparation flow); analysis/runtime integration in this repo also reflects pinned PSPRecomp-based work
- **License:** MIT — see `src/framework/LICENSE-PSPRECOMP` and `src/framework/PROVENANCE.md`
- **Pinned revision (as documented by project scripts):** `f6e7d415c7f447b934cc3865a31eb725f353d659`

## Bundled third-party tools / SDKs

### eboot_decrypt (standalone preparation utility copy)
- **Location:** `third_party/eboot_decrypt/`
- **Provenance:** copied from a user-supplied archive lineage noted in `third_party/eboot_decrypt/PROVENANCE.md`; upstream reference: https://github.com/BasedYuki/the-3rd-birthday-recomp
- **Licensing (as documented locally):** components include PPSSPP-derived PrxDecrypter (GPL-2.0-or-later), libkirk (GPL-3.0-or-later), and utility wrapper materials; combined executable distribution is described as GPL-3.0-or-later in local provenance. See:
  - `third_party/eboot_decrypt/README.md`
  - `third_party/eboot_decrypt/PROVENANCE.md`
  - `third_party/eboot_decrypt/UPSTREAM-RUNTIME-LICENSE`
- **Usage in this repo:** independent local preparation utility; not linked into the DIVA runtime.

### FFmpeg (LGPL shared SDK files included)
- **Location:** `third_party/ffmpeg/`
- **License:** LGPL (shared build variant as recorded) — see `third_party/ffmpeg/LICENSE.txt`
- **Provenance metadata:** `third_party/ffmpeg/PROVENANCE.json`
- **Note:** The media path in this prototype is intended to use LGPL-compatible configuration; codec/config verification behavior is implemented in runtime code. Review provenance and license terms before redistribution.

## Documentation and references

- Project documentation in `docs/` cites and/or references external projects/spec resources (e.g. PPSSPP, FFmpeg, PSPSDK headers) for technical understanding.
- Extracted third-party reference source archives used during investigation are intentionally **not** included in this GitHub snapshot (`references/` is omitted except for a placeholder note) to reduce size and avoid redistributing large external code bundles unnecessarily.

## No game content

This repository does not include copyrighted game software or assets from *Hatsune Miku: Project DIVA* or any other commercial game. Users must supply their own legally obtained original disc image for supported workflows.
