#include "../math/vector2d.h"
#include "../utils/timer.h"
#include <stdio.h>

int main() {
    Timer t;
    timer_start(&t);
    Vector2D v = vec2_create(1, 1);
    for (int i = 0; i < 10000000; ++i) {
        v = vec2_add(v, v);
        v = vec2_scale(v, 0.5f);
    }
    timer_stop(&t);
    printf("Tempo math: %.6f s\n", timer_elapsed(&t));
    return 0;
}
