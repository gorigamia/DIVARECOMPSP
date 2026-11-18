$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
$profile = Get-Content (Join-Path $projectRoot 'config/diva-japan.json') -Raw | ConvertFrom-Json
$elf = Join-Path $projectRoot 'local/japan/EBOOT.ELF'
$codegen = Join-Path $projectRoot 'build/diva/diva_codegen.exe'
$output = Join-Path $projectRoot 'generated/japan'
$log = Join-Path $projectRoot 'local/japan/codegen.log'
if ((Get-FileHash -LiteralPath $elf -Algorithm SHA256).Hash.ToLowerInvariant() -ne $profile.elf_sha256) {
    throw 'ELF does not match the measured Japanese profile.'
}
$previousPlain = $env:PSPRECOMP_PLAIN_AUTO
$previousRanges = $env:DIVA_EXTRA_CODE_RANGES
try {
    # Conservative first corpus: no optional lowering and no K-On FPS/game hooks.
    $env:PSPRECOMP_PLAIN_AUTO = '1'
    $env:DIVA_EXTRA_CODE_RANGES = Join-Path $projectRoot 'config/supplemental-functions.csv'
    & $codegen $elf --auto $output $profile.load_base $profile.unit_span_bytes *> $log
    if ($LASTEXITCODE -ne 0) { throw "Generation failed; see $log" }
    $report = Get-Content (Join-Path $output 'auto_codegen_report.json') -Raw | ConvertFrom-Json
    if ($report.import_wrappers -ne $profile.import_count) { throw 'Unexpected import wrapper count.' }
    $report | Format-List
} finally {
    $env:PSPRECOMP_PLAIN_AUTO = $previousPlain
    $env:DIVA_EXTRA_CODE_RANGES = $previousRanges
}
