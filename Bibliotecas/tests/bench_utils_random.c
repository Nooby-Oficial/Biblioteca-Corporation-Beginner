#include "../math/random.h"
#include "../utils/timer.h"
#include <stdio.h>

int main() {
    Timer t;
    timer_start(&t);
    for (int i = 0; i < 1000000; ++i) {
        random_float();
    }
    timer_stop(&t);
    printf("Tempo random_float: %.6f s\n", timer_elapsed(&t));
    return 0;
}
