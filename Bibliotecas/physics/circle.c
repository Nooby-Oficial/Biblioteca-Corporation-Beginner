#include "circle.h"
#include "aabb.h"

int circle_intersect(Circle a, Circle b) {
    float dx = a.center.x - b.center.x;
    float dy = a.center.y - b.center.y;
    float dist2 = dx*dx + dy*dy;
    float rsum = a.radius + b.radius;
    return dist2 <= rsum*rsum;
}

int circle_aabb_intersect(Circle c, AABB b) {
    float x = c.center.x;
    float y = c.center.y;
    if (x < b.min.x) x = b.min.x;
    if (x > b.max.x) x = b.max.x;
    if (y < b.min.y) y = b.min.y;
    if (y > b.max.y) y = b.max.y;
    float dx = c.center.x - x;
    float dy = c.center.y - y;
    return (dx*dx + dy*dy) <= c.radius*c.radius;
}
