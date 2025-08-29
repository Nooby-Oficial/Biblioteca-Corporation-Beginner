#ifndef COLOR_H
#define COLOR_H

typedef struct {
    unsigned char r, g, b, a;
} Color;

Color color_rgba(unsigned char r, unsigned char g, unsigned char b, unsigned char a);

#endif // COLOR_H
