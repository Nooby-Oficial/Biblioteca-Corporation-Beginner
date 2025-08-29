#include "../platform/platform.h"
#include "../utils/timer.h"
#include <stdio.h>

int main() {
    Timer t;
    timer_start(&t);
    for (int i = 0; i < 10000; ++i) {
        platform_get_time();
    }
    timer_stop(&t);
    printf("Tempo platform: %.6f s\n", timer_elapsed(&t));
    return 0;
}
