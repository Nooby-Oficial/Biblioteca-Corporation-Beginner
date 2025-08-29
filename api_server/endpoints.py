from flask import Blueprint, request, jsonify
import ctypes
import os

bp = Blueprint('api', __name__)

lib_path = os.path.abspath(os.path.join(os.path.dirname(__file__), './Bibliotecas/libbiblioteca.so'))
lib = ctypes.CDLL(lib_path)

# Definições de tipos
lib.biblioteca_soma.restype = ctypes.c_float
lib.biblioteca_soma.argtypes = [ctypes.c_float, ctypes.c_float]

# Adicione aqui outras funções exportadas conforme necessário

@bp.route('/soma', methods=['GET'])
def soma():
    a = float(request.args.get('a', 0))
    b = float(request.args.get('b', 0))
    result = lib.biblioteca_soma(a, b)
    return jsonify({'resultado': result})

# Exemplo de expansão: endpoint para random_float
if hasattr(lib, 'random_float'):
    lib.random_float.restype = ctypes.c_float
    @bp.route('/random', methods=['GET'])
    def random():
        result = lib.random_float()
        return jsonify({'resultado': result})

# Exemplo de expansão: endpoint para trig_sin
if hasattr(lib, 'trig_sin'):
    lib.trig_sin.restype = ctypes.c_float
    lib.trig_sin.argtypes = [ctypes.c_float]
    @bp.route('/sin', methods=['GET'])
    def sin():
        x = float(request.args.get('x', 0))
        result = lib.trig_sin(x)
        return jsonify({'resultado': result})
