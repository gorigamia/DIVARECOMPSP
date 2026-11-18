param([ValidateRange(1,8)][int]$Jobs = 2,
      [ValidateSet('LLVM','MSVC')][string]$Toolchain = 'LLVM')
$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
function Invoke-Checked {
    param([string]$Program, [string[]]$Arguments)
    & $Program @Arguments
    if ($LASTEXITCODE -ne 0) { throw "$Program failed: $LASTEXITCODE" }
}
$source = Join-Path $projectRoot 'third_party/kon_base/third_party/PSPRecomp'
$build = Join-Path $projectRoot $(if ($Toolchain -eq 'LLVM') { 'build/framework-llvm' } else { 'build/framework' })
if (-not (Test-Path (Join-Path $source 'offline-provenance.json'))) {
    throw 'Prepare the offline ZIP with tools/prepare_framework.py first.'
}
if ($Toolchain -eq 'LLVM') {
    $generator = @('-G', 'MinGW Makefiles', '-DCMAKE_CXX_COMPILER=clang++', '-DCMAKE_BUILD_TYPE=Release')
} else {
    $generator = @('-G', 'Visual Studio 17 2022', '-A', 'x64')
}
Invoke-Checked cmake (@('-S', $source, '-B', $build) + $generator + @('-DPSPRECOMP_PROFILE=', '-DPSPRECOMP_BUILD_TESTS=ON', '-DPSPRECOMP_BUILD_PROFILE_TESTS=OFF', '-DPSPRECOMP_MSVC_MP_JOBS=1'))
Invoke-Checked cmake @('--build', $build, '--config', 'Release', '--parallel', "$Jobs")
$testTemp = Join-Path $projectRoot 'local/test-temp'
New-Item -ItemType Directory -Force $testTemp | Out-Null
$previousTemp, $previousTmp = $env:TEMP, $env:TMP
try {
    $env:TEMP = $testTemp
    $env:TMP = $testTemp
    Invoke-Checked ctest @('--test-dir', $build, '-C', 'Release', '--output-on-failure')
} finally {
    $env:TEMP, $env:TMP = $previousTemp, $previousTmp
}
