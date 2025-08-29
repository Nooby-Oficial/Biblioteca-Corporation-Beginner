#ifndef AABB_H
#define AABB_H

#include "../math/vector2d.h"

typedef struct {
    Vector2D min;
    Vector2D max;
} AABB;

int aabb_intersect(AABB a, AABB b);

#endif // AABB_H
