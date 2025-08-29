const express = require('express');
const ffi = require('ffi-napi');
const path = require('path');

const app = express();
const port = 3000;

const lib = ffi.Library(path.resolve(__dirname, './Bibliotecas/libbiblioteca'), {
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
