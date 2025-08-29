#include "aabb.h"

int aabb_intersect(AABB a, AABB b) {
    return (a.max.x > b.min.x && a.min.x < b.max.x &&
            a.max.y > b.min.y && a.min.y < b.max.y);
}
