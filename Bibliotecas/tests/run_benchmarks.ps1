# PowerShell script para rodar benchmarks no Windows, Linux, macOS
$REPORT = "benchmark_report.txt"
"Benchmark Report" | Out-File $REPORT
"=================" | Out-File $REPORT -Append
Get-ChildItem -Filter "bench_*" | Where-Object { $_.Extension -eq ".exe" -or $_.Extension -eq ".out" -or $_.Extension -eq ".bin" } | ForEach-Object {
    Write-Host "Rodando $($_.Name)..."
    "-----------------" | Out-File $REPORT -Append
    $_.Name | Out-File $REPORT -Append
    & .\$($_.Name) | Out-File $REPORT -Append
    "" | Out-File $REPORT -Append
}
Write-Host "Relatorio gerado em $REPORT"
