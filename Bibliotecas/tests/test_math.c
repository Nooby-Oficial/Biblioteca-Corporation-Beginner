#include "../math/vector2d.h"
#include <stdio.h>

int main() {
    Vector2D a = vec2_create(1, 2);
    Vector2D b = vec2_create(3, 4);
    Vector2D c = vec2_add(a, b);
    printf("(%.2f, %.2f)\n", c.x, c.y);
    return 0;
}
