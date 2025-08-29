#include "../math/matrix2d.h"
#include "../math/matrix3d.h"
#include "../utils/timer.h"
#include <stdio.h>

int main() {
    Timer t;
    Matrix2D m2 = matrix2d_identity();
    Matrix3D m3 = matrix3d_identity();
    timer_start(&t);
    for (int i = 0; i < 1000000; ++i) {
        matrix2d_mul(&m2, &m2, &m2);
        matrix3d_mul(&m3, &m3, &m3);
    }
    timer_stop(&t);
    printf("Tempo matrix mul: %.6f s\n", timer_elapsed(&t));
    return 0;
}
