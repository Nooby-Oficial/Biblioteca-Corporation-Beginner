#include "vector2d.h"
#include <math.h>

Vector2D vec2_create(float x, float y) {
    Vector2D v = {x, y};
    return v;
}

Vector2D vec2_add(Vector2D a, Vector2D b) {
    return vec2_create(a.x + b.x, a.y + b.y);
}

Vector2D vec2_sub(Vector2D a, Vector2D b) {
    return vec2_create(a.x - b.x, a.y - b.y);
}

Vector2D vec2_scale(Vector2D v, float s) {
    return vec2_create(v.x * s, v.y * s);
}

float vec2_dot(Vector2D a, Vector2D b) {
    return a.x * b.x + a.y * b.y;
}

float vec2_length(Vector2D v) {
    return sqrtf(v.x * v.x + v.y * v.y);
}

Vector2D vec2_normalize(Vector2D v) {
    float len = vec2_length(v);
    if (len == 0) return vec2_create(0, 0);
    return vec2_scale(v, 1.0f / len);
}
