# Bindings para Outras Linguagens

Este diretório contém exemplos e instruções para usar a biblioteca em diversas linguagens via FFI (Foreign Function Interface).

## Linguagens suportadas (exemplo)
- Python (ctypes/cffi)
- C# (.NET P/Invoke)
- Java (JNI/JNA)
- Node.js (ffi-napi)
- Go (cgo)
- Rust (bindgen)
- Lua (LuaJIT FFI)
- Swift/Objective-C
- Ruby (ffi)
- Outros via SWIG

## Como gerar bindings
- Compile a biblioteca dinâmica (`libbiblioteca.so`/`libbiblioteca.dll`).
- Siga os exemplos de cada subdiretório para integrar na linguagem desejada.
- Use SWIG para gerar wrappers automáticos para múltiplas linguagens.

## Exemplos
Veja os subdiretórios para exemplos prontos e scripts de build.
