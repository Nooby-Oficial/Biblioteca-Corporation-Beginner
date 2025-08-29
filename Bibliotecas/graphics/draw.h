#ifndef DRAW_H
#define DRAW_H

#include "color.h"

void draw_line(int x0, int y0, int x1, int y1, Color color);
void draw_rect(int x, int y, int w, int h, Color color);
void draw_circle(int x, int y, int r, Color color);
// ... outros métodos

#endif // DRAW_H
