#include "../physics/aabb.h"
#include "../physics/circle.h"
#include "../utils/timer.h"
#include <stdio.h>

int main() {
    Timer t;
    AABB a = {vec2_create(0,0), vec2_create(1,1)};
    AABB b = {vec2_create(0.5,0.5), vec2_create(1.5,1.5)};
    Circle c1 = {vec2_create(0,0), 1.0f};
    Circle c2 = {vec2_create(0.5,0.5), 1.0f};
    timer_start(&t);
    int count = 0;
    for (int i = 0; i < 10000000; ++i) {
        count += aabb_intersect(a, b);
        count += circle_intersect(c1, c2);
    }
    timer_stop(&t);
    printf("Tempo physics: %.6f s\n", timer_elapsed(&t));
    return 0;
}
