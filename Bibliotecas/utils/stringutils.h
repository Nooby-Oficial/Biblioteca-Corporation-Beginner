#ifndef STRINGUTILS_H
#define STRINGUTILS_H

#include <stddef.h>

size_t str_length(const char* str);
void str_copy(char* dest, const char* src, size_t maxlen);
int str_compare(const char* a, const char* b);

#endif // STRINGUTILS_H
