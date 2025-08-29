#include "color.h"

Color color_rgba(unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
    Color c = {r, g, b, a};
    return c;
}
