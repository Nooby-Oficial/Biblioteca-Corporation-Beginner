#include "../utils/timer.h"
#include <stdio.h>
#include <string.h>

int main() {
    Timer t;
    char buffer[256];
    timer_start(&t);
    for (int i = 0; i < 1000000; ++i) {
        snprintf(buffer, 256, "Linha %d", i);
    }
    timer_stop(&t);
    printf("Tempo utils: %.6f s\n", timer_elapsed(&t));
    return 0;
}
