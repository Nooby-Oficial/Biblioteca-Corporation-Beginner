import React, { useState } from 'react';

function App() {
  const [a, setA] = useState(2.5);
  const [b, setB] = useState(3.5);
  const [resultado, setResultado] = useState(null);
  const [wasm, setWasm] = useState(null);

  React.useEffect(() => {
    import('../Bibliotecas/wasm/biblioteca_wasm.js').then(Module => {
      Module().then(setWasm);
    });
  }, []);

  const somar = () => {
    if (wasm) {
      setResultado(wasm._biblioteca_soma(Number(a), Number(b)));
    }
  };

  return (
    <div style={{ fontFamily: 'sans-serif', maxWidth: 400, margin: '2em auto' }}>
      <h1>Demo Biblioteca Universal (React + WASM)</h1>
      <input type="number" value={a} onChange={e => setA(e.target.value)} /> +
      <input type="number" value={b} onChange={e => setB(e.target.value)} />
      <button onClick={somar} disabled={!wasm}>Somar (WASM)</button>
      <div style={{ marginTop: 16 }}>
        {resultado !== null && <b>Resultado: {resultado}</b>}
      </div>
    </div>
  );
}

export default App;
