#include "../graphics/color.h"
#include <stdio.h>

int main() {
    Color c = color_rgba(10,20,30,255);
    printf("Cor: %d %d %d %d\n", c.r, c.g, c.b, c.a);
    return 0;
}
