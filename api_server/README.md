# API Server para uso remoto da biblioteca

## Como rodar

1. Certifique-se de que a biblioteca nativa (`libbiblioteca.so` ou `libbiblioteca.dll`) está compilada em `./Bibliotecas/`.
2. Instale as dependências:
   ```
   pip install -r requirements.txt
   ```
3. Inicie o servidor:
   ```
   python app.py
   ```
4. Endpoints disponíveis:
   - `GET /soma?a=2.5&b=3.5` retorna `{ "resultado": 6.0 }`
   - `GET /random` retorna `{ "resultado": <float aleatório> }` (se implementado)
   - `GET /sin?x=0.5` retorna `{ "resultado": <sin(x)> }` (se implementado)

## Expansão
- Adicione novos endpoints em `endpoints.py` para expor outras funções da biblioteca.
- Pronto para integração com sites, apps, microserviços, automação, etc.
