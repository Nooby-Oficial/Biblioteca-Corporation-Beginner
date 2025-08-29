#include "../utils/stringutils.h"
#include "../utils/timer.h"
#include <stdio.h>

int main() {
    Timer t;
    char dest[256];
    timer_start(&t);
    for (int i = 0; i < 1000000; ++i) {
        string_copy(dest, "benchmark");
    }
    timer_stop(&t);
    printf("Tempo string copy: %.6f s\n", timer_elapsed(&t));
    return 0;
}
