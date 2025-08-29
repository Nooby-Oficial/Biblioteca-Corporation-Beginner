cmake_minimum_required(VERSION 3.0)
project(biblioteca_wasm)
set(CMAKE_C_STANDARD 99)
set(CMAKE_EXECUTABLE_SUFFIX ".html")

add_executable(biblioteca_wasm ../biblioteca.c)
set_target_properties(biblioteca_wasm PROPERTIES LINK_FLAGS "--bind -s MODULARIZE=1 -s EXPORT_NAME='BibliotecaWASM' -s EXPORTED_FUNCTIONS=['_biblioteca_soma']")
