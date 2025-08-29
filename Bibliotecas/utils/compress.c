#include "compress.h"
#include <string.h>

// Compressão simples: apenas copia os dados (placeholder)
int compress_data(const void* in, int in_size, void* out, int out_size) {
    if (in_size > out_size) return -1;
    memcpy(out, in, in_size);
    return in_size;
}

int decompress_data(const void* in, int in_size, void* out, int out_size) {
    if (in_size > out_size) return -1;
    memcpy(out, in, in_size);
    return in_size;
}
