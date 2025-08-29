@echo off
setlocal enabledelayedexpansion

REM Script para rodar todos os benchmarks e gerar relatorio
set REPORT=benchmark_report.txt
echo Benchmark Report > %REPORT%
echo ================= >> %REPORT%

for %%F in (bench_*.exe) do (
    echo Rodando %%F...
    echo ----------------- >> %REPORT%
    echo %%F >> %REPORT%
    .\%%F >> %REPORT%
    echo. >> %REPORT%
)

echo Relatorio gerado em %REPORT%
pause
