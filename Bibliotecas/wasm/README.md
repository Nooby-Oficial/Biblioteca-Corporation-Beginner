# WebAssembly (WASM) da Biblioteca

## Como compilar para WASM

1. Instale o Emscripten SDK: https://emscripten.org/docs/getting_started/downloads.html
2. No diretório `Bibliotecas/wasm`, execute:
   ```
   emcmake cmake .
   emmake make
   ```
3. O arquivo `biblioteca_wasm.js`/`biblioteca_wasm.wasm` será gerado e pode ser usado em aplicações web.

## Como usar no navegador

Inclua o JS/WASM gerado em seu site e chame as funções exportadas (ex: `biblioteca_soma`).

## Expansão
- Exporte mais funções adicionando-as em `CMakeLists.txt` e recompilando.
