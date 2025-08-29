#include "../utils/log.h"
#include "../utils/timer.h"
#include <stdio.h>

int main() {
    Timer t;
    timer_start(&t);
    for (int i = 0; i < 100000; ++i) {
        log_info("Benchmark log %d", i);
    }
    timer_stop(&t);
    printf("Tempo log: %.6f s\n", timer_elapsed(&t));
    return 0;
}
