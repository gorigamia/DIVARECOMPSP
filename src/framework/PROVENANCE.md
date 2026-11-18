# DIVA analysis extension

`program_analysis.cpp` is derived from the pinned PSPRecomp revision
f6e7d415c7f447b934cc3865a31eb725f353d659 with the original K-On patch.
The MIT notice is preserved in LICENSE-PSPRECOMP.

DIVA additions:

- `DIVA_EXTRA_CODE_RANGES` reads audited file-backed code islands from a CSV.
- Allocated non-executable sections are scanned for pointers into known code,
  including ET_EXEC images whose single RWX segment prevented the original
  data-segment pointer scan.

The base PSPRecomp checkout remains unchanged. The DIVA analyzer and code
generator link this analysis implementation ahead of the base static archive.
The translated game still executes only as compiled native code.

Profile evidence: ULJM05472 has an initializer function array at 0x08B778BC
containing 11 pointers into 0x08B73BA8..0x08B778BC. This executable island
lies in the ELF's .data section. The last initializer ends with JR RA at
0x08B778B4 and its delay slot at 0x08B778B8. The profile includes the code,
not the array itself. Runtime execution reached the first two initializers
before this extent was fully mapped.

An additional measured entry at 0x088525F4 was reached during a longer title
animation run. It starts with the stack prologue ADDIU SP,SP,-48; it is already
inside .text, so the profile seeds its CFG without creating an overlapping
executable range. The profile's four-byte extent validates the entry; analysis
follows the actual function control flow within .text.
