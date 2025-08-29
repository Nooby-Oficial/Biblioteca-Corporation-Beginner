# Deploy Backend (Render/Railway)

## Como publicar seu backend Python + biblioteca nativa

1. Certifique-se de que `libbiblioteca.so`, `app.py`, `requirements.txt` e `Dockerfile` estão em `api_server/`.
2. Faça push do projeto para o GitHub.
3. No painel do Render ou Railway:
   - Crie um novo serviço do tipo "Web Service".
   - Escolha "Deploy from GitHub" e selecione o repositório.
   - Render/Railway detecta o Dockerfile automaticamente.
   - Configure a porta para `5000`.
   - Adicione variáveis de ambiente se necessário.
4. O backend será publicado com HTTPS, domínio próprio e integração GitHub.

## Segurança
- Use variáveis secretas para senhas e tokens.
- Ative HTTPS e autenticação se necessário.
- Monitore logs e configure alertas no painel do serviço.

## Frontend
- Publique o frontend (Vite/React) no Vercel, Netlify ou no mesmo Render/Railway (serviço estático).

## Mobile
- Aponte o app para a URL pública do backend.
# Deploy Backend (Render/Railway)

## Como publicar seu backend Python + biblioteca nativa

1. Certifique-se de que `libbiblioteca.so`, `app.py`, `requirements.txt` e `Dockerfile` estão em `Projet-biblioteca/api_server/`.
2. Faça push do projeto para o GitHub.
3. No painel do Render ou Railway:
   - Crie um novo serviço do tipo "Web Service".
   - Escolha "Deploy from GitHub" e selecione o repositório.
   - Render/Railway detecta o Dockerfile automaticamente.
   - Configure a porta para `5000`.
   - Adicione variáveis de ambiente se necessário.
4. O backend será publicado com HTTPS, domínio próprio e integração GitHub.

## Segurança
- Use variáveis secretas para senhas e tokens.
- Ative HTTPS e autenticação se necessário.
- Monitore logs e configure alertas no painel do serviço.

## Frontend
- Publique o frontend (Vite/React) no Vercel, Netlify ou no mesmo Render/Railway (serviço estático) em `Projet-biblioteca/frontend`.

## Mobile
- Aponte o app para a URL pública do backend.
