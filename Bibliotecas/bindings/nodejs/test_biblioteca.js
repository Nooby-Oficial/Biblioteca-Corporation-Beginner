const ffi = require('ffi-napi');
const path = require('path');

const lib = ffi.Library(path.resolve(__dirname, '../../libbiblioteca'), {
  'biblioteca_soma': ['float', ['float', 'float']]
});

console.log('biblioteca_soma(2.5, 3.5) =', lib.biblioteca_soma(2.5, 3.5));
