#include "interpolation.h"

float lerp(float a, float b, float t) {
    return a + t * (b - a);
}

float smoothstep(float a, float b, float t) {
    t = (t < 0) ? 0 : (t > 1) ? 1 : t;
    t = t * t * (3 - 2 * t);
    return a + t * (b - a);
}
