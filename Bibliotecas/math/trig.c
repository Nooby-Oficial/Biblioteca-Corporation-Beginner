#include "trig.h"

float clamp(float x, float min, float max) {
    if (x < min) return min;
    if (x > max) return max;
    return x;
}

float minf(float a, float b) { return a < b ? a : b; }
float maxf(float a, float b) { return a > b ? a : b; }
