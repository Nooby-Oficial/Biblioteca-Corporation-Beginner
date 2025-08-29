import re

with open('benchmark_report.txt', 'r') as f:
    lines = f.readlines()

results = []
current = None
for line in lines:
    if line.startswith('bench_'):
        current = line.strip()
    elif 'Tempo' in line:
        match = re.search(r'Tempo ([\w_]+): ([0-9.]+) s', line)
        if match:
            results.append((current, match.group(1), float(match.group(2))))

if results:
    print("Resumo dos tempos de benchmark:")
    for bench, label, tempo in results:
        print(f"{bench} - {label}: {tempo:.6f} s")
    print(f"\nTotal de benchmarks: {len(results)}")
else:
    print("Nenhum resultado encontrado.")
