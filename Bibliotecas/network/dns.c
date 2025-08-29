#include "dns.h"
#include <stdio.h>

int dns_resolve(const char* host, char* ip, int maxlen) {
    snprintf(ip, maxlen, "127.0.0.1");
    return 0;
}
