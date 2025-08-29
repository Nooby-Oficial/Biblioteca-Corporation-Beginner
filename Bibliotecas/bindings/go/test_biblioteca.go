package main

/*
#cgo LDFLAGS: -L../../ -lbiblioteca
#include "../../biblioteca.h"
*/
import "C"
import "fmt"

func main() {
    r := C.biblioteca_soma(2.5, 3.5)
    fmt.Printf("biblioteca_soma(2.5, 3.5) = %.2f\n", float32(r))
}
