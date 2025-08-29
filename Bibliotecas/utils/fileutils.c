#include "fileutils.h"

FILE* file_open(const char* path, const char* mode) {
    return fopen(path, mode);
}

size_t file_read(void* buffer, size_t size, size_t count, FILE* stream) {
    return fread(buffer, size, count, stream);
}

size_t file_write(const void* buffer, size_t size, size_t count, FILE* stream) {
    return fwrite(buffer, size, count, stream);
}

void file_close(FILE* stream) {
    fclose(stream);
}
