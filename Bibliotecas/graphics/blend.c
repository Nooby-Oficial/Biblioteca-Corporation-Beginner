#include "blend.h"

Color blend_colors(Color a, Color b, float t) {
    Color c;
    c.r = (unsigned char)(a.r + t * (b.r - a.r));
    c.g = (unsigned char)(a.g + t * (b.g - a.g));
    c.b = (unsigned char)(a.b + t * (b.b - a.b));
    c.a = (unsigned char)(a.a + t * (b.a - a.a));
    return c;
}
