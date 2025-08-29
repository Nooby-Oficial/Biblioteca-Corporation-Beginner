#include "matrix2d.h"
#include "vector2d.h"
#include <math.h>

Matrix2D mat2_identity() {
    Matrix2D m = {{{1, 0}, {0, 1}}};
    return m;
}

Matrix2D mat2_scale(float sx, float sy) {
    Matrix2D m = {{{sx, 0}, {0, sy}}};
    return m;
}

Matrix2D mat2_rotate(float angle) {
    float c = cosf(angle);
    float s = sinf(angle);
    Matrix2D m = {{{c, -s}, {s, c}}};
    return m;
}

Vector2D mat2_mul_vec2(Matrix2D m, Vector2D v) {
    return vec2_create(
        m.m[0][0] * v.x + m.m[0][1] * v.y,
        m.m[1][0] * v.x + m.m[1][1] * v.y
    );
}

Matrix2D mat2_mul(Matrix2D a, Matrix2D b) {
    Matrix2D m;
    m.m[0][0] = a.m[0][0]*b.m[0][0] + a.m[0][1]*b.m[1][0];
    m.m[0][1] = a.m[0][0]*b.m[0][1] + a.m[0][1]*b.m[1][1];
    m.m[1][0] = a.m[1][0]*b.m[0][0] + a.m[1][1]*b.m[1][0];
    m.m[1][1] = a.m[1][0]*b.m[0][1] + a.m[1][1]*b.m[1][1];
    return m;
}
