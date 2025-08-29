#!/bin/sh
# Publica o relatório de benchmarks em um repositório remoto ou serviço
# Exemplo usando GitHub Pages (ajuste conforme necessário)
git config --global user.email "ci@example.com"
git config --global user.name "CI Bot"
git checkout gh-pages || git checkout --orphan gh-pages
git rm -rf .
cp Bibliotecas/tests/benchmark_report.txt ./
git add benchmark_report.txt
git commit -m "Atualiza relatório de benchmarks [ci skip]"
git push origin gh-pages
