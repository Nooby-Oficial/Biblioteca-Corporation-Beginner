#include "../input/input.h"
#include "../utils/timer.h"
#include <stdio.h>

int main() {
    Timer t;
    timer_start(&t);
    for (int i = 0; i < 1000000; ++i) {
        input_is_key_pressed(32); // Placeholder
    }
    timer_stop(&t);
    printf("Tempo input: %.6f s\n", timer_elapsed(&t));
    return 0;
}
