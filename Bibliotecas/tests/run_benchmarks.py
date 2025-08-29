import os
import subprocess

REPORT = "benchmark_report.txt"
with open(REPORT, "w") as f:
    f.write("Benchmark Report\n=================\n")
    for file in os.listdir('.'):
        if file.startswith('bench_') and (file.endswith('.exe') or file.endswith('.out') or file.endswith('.bin') or os.access(file, os.X_OK)):
            f.write(f"-----------------\n{file}\n")
            print(f"Rodando {file}...")
            try:
                output = subprocess.check_output([os.path.join('.', file)], universal_newlines=True)
                f.write(output + "\n")
            except Exception as e:
                f.write(f"Erro ao rodar {file}: {e}\n")
    print(f"Relatorio gerado em {REPORT}")
