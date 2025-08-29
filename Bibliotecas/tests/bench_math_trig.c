#include "../math/trig.h"
#include "../utils/timer.h"
#include <stdio.h>
#include <math.h>

int main() {
    Timer t;
    float x = 0.5f;
    timer_start(&t);
    for (int i = 0; i < 1000000; ++i) {
        trig_sin(x);
        trig_cos(x);
        trig_tan(x);
    }
    timer_stop(&t);
    printf("Tempo trig: %.6f s\n", timer_elapsed(&t));
    return 0;
}
