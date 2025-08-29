#include "http.h"
#include <stdio.h>
#include <string.h>

// Simulação de GET HTTP
int http_get(const char* url, char* response, int maxlen) {
    snprintf(response, maxlen, "GET %s OK", url);
    return 0;
}

int http_post(const char* url, const char* data, char* response, int maxlen) {
    snprintf(response, maxlen, "POST %s DATA %s OK", url, data);
    return 0;
}
