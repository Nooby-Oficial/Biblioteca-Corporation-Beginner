# Mobile App - Biblioteca Universal

## Como rodar

1. Certifique-se de que a API está rodando (`api_server/app.py`).
2. Instale as dependências:
   ```
   cd mobile
   npm install
   ```
3. Rode o app (Android/iOS):
   ```
   npx react-native run-android
   # ou
   npx react-native run-ios
   ```
4. O app irá consumir a API e exibir o resultado da soma.

## Expansão
- Adicione mais operações e telas conforme necessário.
- Integração pronta para web, desktop e mobile.

# Mobile App - Biblioteca Universal (Windows Ready)

## Como rodar

1. Certifique-se de que a API está rodando no Windows (`api_server/app_win.py` ou `server_win.js`).
2. Defina o IP do servidor Windows em `.env` (ex: `API_URL=http://192.168.0.100:5000`).
3. Instale as dependências:
   ```
   cd mobile
   npm install
   ```
4. Rode o app (Android/iOS):
   ```
   npx react-native run-android
   # ou
   npx react-native run-ios
   ```
5. O app irá consumir a API real do backend Windows e exibir o resultado da soma.

## Expansão
- Adicione mais operações e telas conforme necessário.
- Integração real e universal entre Windows, web e mobile.
