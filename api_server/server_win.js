const express = require('express');
const ffi = require('ffi-napi');
const path = require('path');
const os = require('os');

const app = express();
const port = 3000;

let libPath;
if (os.platform() === 'win32') {
  libPath = path.resolve(__dirname, './Bibliotecas/libbiblioteca.dll');
} else {
  libPath = path.resolve(__dirname, './Bibliotecas/libbiblioteca.so');
}

const lib = ffi.Library(libPath, {
  'biblioteca_soma': ['float', ['float', 'float']]
});

app.get('/soma', (req, res) => {
  const a = parseFloat(req.query.a || 0);
  const b = parseFloat(req.query.b || 0);
  const result = lib.biblioteca_soma(a, b);
  res.json({ resultado: result });
});

app.listen(port, () => {
  console.log(`Servidor Node.js rodando na porta ${port}`);
});
