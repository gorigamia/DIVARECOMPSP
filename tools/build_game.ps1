param([ValidateRange(1,8)][int]$Jobs=4, [switch]$Regenerate)
$ErrorActionPreference='Stop'
$projectRoot=Split-Path -Parent $PSScriptRoot
function Invoke-Checked {
    param([string]$Program,[string[]]$Arguments)
    & $Program @Arguments
    if($LASTEXITCODE -ne 0){throw "$Program failed with exit code $LASTEXITCODE"}
}
$build=Join-Path $projectRoot 'build/diva'
Invoke-Checked cmake @('-S',$projectRoot,'-B',$build,'-G','MinGW Makefiles','-DCMAKE_CXX_COMPILER=clang++','-DCMAKE_BUILD_TYPE=Release')
Invoke-Checked cmake @('--build',$build,'--target','diva_codegen','diva_analyze','--parallel',"$Jobs")
if($Regenerate -or !(Test-Path (Join-Path $projectRoot 'generated/japan/auto_codegen_report.json'))){
    & (Join-Path $PSScriptRoot 'generate_game.ps1')
}
Invoke-Checked cmake @('--build',$build,'--target','diva_boot','diva_launcher','--parallel',"$Jobs")
