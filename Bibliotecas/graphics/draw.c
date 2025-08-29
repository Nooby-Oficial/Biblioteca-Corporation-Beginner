#include "draw.h"
#include <stdio.h>

void draw_line(int x0, int y0, int x1, int y1, Color color) {
    printf("Draw line: (%d,%d) -> (%d,%d) color(%d,%d,%d,%d)\n", x0, y0, x1, y1, color.r, color.g, color.b, color.a);
}

void draw_rect(int x, int y, int w, int h, Color color) {
    printf("Draw rect: (%d,%d) %dx%d color(%d,%d,%d,%d)\n", x, y, w, h, color.r, color.g, color.b, color.a);
}

void draw_circle(int x, int y, int r, Color color) {
    printf("Draw circle: (%d,%d) r=%d color(%d,%d,%d,%d)\n", x, y, r, color.r, color.g, color.b, color.a);
}
