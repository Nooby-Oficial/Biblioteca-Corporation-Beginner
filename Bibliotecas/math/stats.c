#include "stats.h"
#include <math.h>

float mean(const float* data, int n) {
    float sum = 0;
    for (int i = 0; i < n; ++i) sum += data[i];
    return sum / n;
}

float variance(const float* data, int n) {
    float m = mean(data, n);
    float sum = 0;
    for (int i = 0; i < n; ++i) sum += (data[i] - m) * (data[i] - m);
    return sum / n;
}

float stddev(const float* data, int n) {
    return sqrtf(variance(data, n));
}
