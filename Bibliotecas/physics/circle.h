#ifndef CIRCLE_H
#define CIRCLE_H

#include "../math/vector2d.h"

typedef struct {
    Vector2D center;
    float radius;
} Circle;

int circle_intersect(Circle a, Circle b);
int circle_aabb_intersect(Circle c, AABB b);

#endif // CIRCLE_H
