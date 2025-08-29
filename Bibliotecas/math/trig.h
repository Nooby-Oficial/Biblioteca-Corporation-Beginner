#ifndef TRIG_H
#define TRIG_H

#include <math.h>

#define DEG2RAD(x) ((x) * (M_PI / 180.0f))
#define RAD2DEG(x) ((x) * (180.0f / M_PI))

float clamp(float x, float min, float max);
float minf(float a, float b);
float maxf(float a, float b);

#endif // TRIG_H
