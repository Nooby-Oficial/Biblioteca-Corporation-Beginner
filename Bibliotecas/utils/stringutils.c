#include "stringutils.h"
#include <string.h>

size_t str_length(const char* str) {
    return strlen(str);
}

void str_copy(char* dest, const char* src, size_t maxlen) {
    strncpy(dest, src, maxlen);
    dest[maxlen-1] = '\0';
}

int str_compare(const char* a, const char* b) {
    return strcmp(a, b);
}
