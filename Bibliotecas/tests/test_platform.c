#include "../platform/platform.h"
#include <stdio.h>

int main() {
    printf("SO: %s\n", platform_name());
    return 0;
}
