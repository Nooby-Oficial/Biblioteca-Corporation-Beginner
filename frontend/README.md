# Frontend Web - Biblioteca Universal

## Como rodar

1. Compile o WASM conforme instruções em `Bibliotecas/wasm/README.md`.
2. Instale as dependências do frontend:
   ```
   cd frontend
   npm install
   ```
3. Inicie o servidor de desenvolvimento:
   ```
   npm run dev
   ```
4. Acesse `http://localhost:5173` no navegador.

## Observações para Windows
- Certifique-se de que o backend (Flask ou Node.js) está usando a DLL (`libbiblioteca.dll`).
- Ajuste os caminhos dos arquivos se necessário para Windows.

## Integração com frameworks
- O WASM pode ser usado em React, Vue, Angular, Svelte, etc. Basta importar o JS/WASM e chamar as funções exportadas.
- Para integração com backend (Flask/Node), use fetch/AJAX para consumir os endpoints HTTP.
