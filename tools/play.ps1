param([ValidateRange(0,120)][int]$DiagnosticSeconds=0,[switch]$Wait,[switch]$NoLog,[switch]$DirectBoot)
$ErrorActionPreference='Stop'
$projectRoot=Split-Path -Parent $PSScriptRoot
if(!$DirectBoot){
    $launcher=Join-Path $projectRoot 'build/diva/diva_launcher.exe'
    if(!(Test-Path -LiteralPath $launcher)){throw 'Compile o launcher com tools/build_game.ps1.'}
    $launchInfo=[System.Diagnostics.ProcessStartInfo]::new()
    $launchInfo.FileName=$launcher
    $launchInfo.WorkingDirectory=$projectRoot
    $launchInfo.UseShellExecute=$false
    $launchInfo.CreateNoWindow=$true
    if($NoLog){$launchInfo.Arguments='--no-log '}
    if($DiagnosticSeconds){$launchInfo.Arguments+='--diagnostic-ms '+($DiagnosticSeconds*1000)}
    $launcherProcess=[System.Diagnostics.Process]::Start($launchInfo)
    if($Wait){$launcherProcess.WaitForExit()}
    return
}
$exe=Join-Path $projectRoot 'build/diva/diva_boot.exe'
if(!(Test-Path -LiteralPath $exe)){throw 'Build the prototype with tools/build_game.ps1 first.'}
# Hide the diagnostic console; the game's own native window opens normally.
$arguments='--root "'+$projectRoot+'" --language ja --window --cpu-renderer'
if($DiagnosticSeconds){$arguments+=' --max-runtime-ms '+($DiagnosticSeconds*1000)}
$start=[System.Diagnostics.ProcessStartInfo]::new()
$start.FileName=$exe
$start.Arguments=$arguments
$start.WorkingDirectory=$projectRoot
$start.UseShellExecute=$false
$start.CreateNoWindow=$true
if($NoLog){$start.EnvironmentVariables['DIVA_HIDE_LOG']='1'}
$process=[System.Diagnostics.Process]::Start($start)
New-Item -ItemType Directory -Force (Join-Path $projectRoot 'local') | Out-Null
$process.Id | Set-Content -LiteralPath (Join-Path $projectRoot 'local/play.pid')
Write-Output "Project DIVA process: $($process.Id)"
if($Wait){$process.WaitForExit()}
