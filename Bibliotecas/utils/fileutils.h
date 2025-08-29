#ifndef FILEUTILS_H
#define FILEUTILS_H

#include <stdio.h>

FILE* file_open(const char* path, const char* mode);
size_t file_read(void* buffer, size_t size, size_t count, FILE* stream);
size_t file_write(const void* buffer, size_t size, size_t count, FILE* stream);
void file_close(FILE* stream);

#endif // FILEUTILS_H
