#include "../math/quaternion.h"
#include "../utils/timer.h"
#include <stdio.h>

int main() {
    Timer t;
    Quaternion q = quaternion_identity();
    timer_start(&t);
    for (int i = 0; i < 1000000; ++i) {
        quaternion_mul(&q, &q, &q);
    }
    timer_stop(&t);
    printf("Tempo quaternion mul: %.6f s\n", timer_elapsed(&t));
    return 0;
}
