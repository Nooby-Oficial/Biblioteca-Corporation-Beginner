from flask import Flask, request, jsonify
import ctypes
import os
import platform

app = Flask(__name__)

# Carrega a DLL no Windows
if platform.system() == 'Windows':
    lib_path = os.path.abspath(os.path.join(os.path.dirname(__file__), './Bibliotecas/libbiblioteca.dll'))
    lib = ctypes.CDLL(lib_path)
else:
    lib_path = os.path.abspath(os.path.join(os.path.dirname(__file__), './Bibliotecas/libbiblioteca.so'))
    lib = ctypes.CDLL(lib_path)

lib.biblioteca_soma.restype = ctypes.c_float
lib.biblioteca_soma.argtypes = [ctypes.c_float, ctypes.c_float]

@app.route('/soma', methods=['GET'])
def soma():
    a = float(request.args.get('a', 0))
    b = float(request.args.get('b', 0))
    result = lib.biblioteca_soma(a, b)
    return jsonify({'resultado': result})

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)
