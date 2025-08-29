#include "../utils/log.h"
#include "../utils/stringutils.h"
#include <stdio.h>

int main() {
    LOG_INFO("Teste de log");
    char dest[32];
    str_copy(dest, "Hello, world!", 32);
    printf("%s\n", dest);
    return 0;
}
