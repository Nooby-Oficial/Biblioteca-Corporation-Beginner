#include "../physics/aabb.h"
#include <stdio.h>

int main() {
    AABB a = {vec2_create(0,0), vec2_create(2,2)};
    AABB b = {vec2_create(1,1), vec2_create(3,3)};
    printf("Colide: %d\n", aabb_intersect(a, b));
    return 0;
}
