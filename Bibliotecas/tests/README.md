# CI/CD, Publicação e Expansão de Recursos

## CI/CD
- Pipeline GitHub Actions já configurado em `.github/workflows/ci.yml`.
- Compila, executa benchmarks e publica relatório como artefato.

## Publicação
- Script `publish_benchmarks.sh` para publicar relatório em branch `gh-pages` (ou adapte para outro serviço).
- Sugestão: configure GitHub Pages para exibir o relatório.

## Expansão de Recursos
- Veja `expansao_recursos.md` para roadmap de recursos avançados, integração, documentação e publicação.

## Como contribuir
- Siga o fluxo de pull request e utilize o pipeline CI para garantir qualidade.
- Sugestão: adicione badges de status, cobertura e benchmarks no README principal.
# Benchmarks das Bibliotecas

## Como rodar benchmarks e gerar relatório

### Windows (CMD)
1. Compile todos os arquivos `bench_*.c` para gerar os executáveis `bench_*.exe`.
2. Execute:
   ```
   run_benchmarks.bat
   ```

### Windows (PowerShell)
1. Compile os benchmarks.
2. Execute:
   ```
   ./run_benchmarks.ps1
   ```

### Linux/macOS (Shell)
1. Compile todos os arquivos `bench_*.c` para gerar executáveis (`bench_*.out`, etc).
2. Execute:
   ```
   sh run_benchmarks.sh
   ```

### Qualquer sistema (Python)
1. Compile os benchmarks.
2. Execute:
   ```
   python run_benchmarks.py
   ```

## Análise dos resultados

Após rodar qualquer script acima, execute:
```python
python analyze_benchmarks.py
```
Isso irá gerar um resumo dos tempos de cada benchmark.

## Observações
- Scripts cobrem Windows, Linux, macOS e ambientes Python.
- O relatório é salvo em `benchmark_report.txt`.
- O script de análise gera um resumo dos tempos para facilitar comparação.
