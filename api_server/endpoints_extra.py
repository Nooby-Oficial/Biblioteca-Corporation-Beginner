from flask import request, jsonify
import ctypes
import os

# Carrega a biblioteca nativa
lib_path = os.path.abspath(os.path.join(os.path.dirname(__file__), './Bibliotecas/libbiblioteca.so'))
lib = ctypes.CDLL(lib_path)

# Exemplo de endpoint para multiplicação
if hasattr(lib, 'biblioteca_multiplica'):
    lib.biblioteca_multiplica.restype = ctypes.c_float
    lib.biblioteca_multiplica.argtypes = [ctypes.c_float, ctypes.c_float]
    def multiplica():
        a = float(request.args.get('a', 0))
        b = float(request.args.get('b', 0))
        result = lib.biblioteca_multiplica(a, b)
        return jsonify({'resultado': result})

# Exemplo de endpoint para uuid_generate
if hasattr(lib, 'uuid_generate'):
    lib.uuid_generate.restype = None
    lib.uuid_generate.argtypes = [ctypes.c_char_p]
    def uuid():
        import ctypes
        buf = ctypes.create_string_buffer(37)
        lib.uuid_generate(buf)
        return jsonify({'uuid': buf.value.decode()})
