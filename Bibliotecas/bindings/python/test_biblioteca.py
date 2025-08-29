import ctypes
import os

# Carrega a DLL/SO
lib = ctypes.CDLL(os.path.abspath("../../libbiblioteca.so"))

# Define assinatura da função
lib.biblioteca_soma.restype = ctypes.c_float
lib.biblioteca_soma.argtypes = [ctypes.c_float, ctypes.c_float]

# Teste
r = lib.biblioteca_soma(2.5, 3.5)
print(f"biblioteca_soma(2.5, 3.5) = {r}")
