# Exemplos de uso da biblioteca em várias linguagens

## Python
```
cd bindings/python
python test_biblioteca.py
```

## C#
```
cd bindings/csharp
csc TestBiblioteca.cs
./TestBiblioteca.exe
```

## Java
```
cd bindings/java
javac TestBiblioteca.java
java -Djava.library.path=../../ TestBiblioteca
```

## Node.js
```
cd bindings/nodejs
npm install ffi-napi
node test_biblioteca.js
```

## Go
```
cd bindings/go
go run test_biblioteca.go
```

## Rust
```
cd bindings/rust
cargo run
```
