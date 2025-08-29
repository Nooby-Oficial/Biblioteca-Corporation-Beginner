#!/bin/sh
# Script para rodar benchmarks em sistemas Unix/Linux/macOS
REPORT=benchmark_report.txt
echo "Benchmark Report" > $REPORT
echo "=================" >> $REPORT
for f in bench_*.out bench_*.exe bench_*.bin bench_*; do
  if [ -x "$f" ]; then
    echo "Rodando $f..."
    echo "-----------------" >> $REPORT
    echo "$f" >> $REPORT
    ./$f >> $REPORT
    echo >> $REPORT
  fi
done
echo "Relatorio gerado em $REPORT"
