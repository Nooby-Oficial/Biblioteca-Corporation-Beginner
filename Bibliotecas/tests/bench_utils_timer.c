#include "../utils/timer.h"
#include <stdio.h>

int main() {
    Timer t;
    timer_start(&t);
    for (int i = 0; i < 1000000; ++i) {
        timer_elapsed(&t);
    }
    timer_stop(&t);
    printf("Tempo timer_elapsed: %.6f s\n", timer_elapsed(&t));
    return 0;
}
