#ifndef IMAGE_H
#define IMAGE_H

#include <stddef.h>

typedef struct {
    int width, height, channels;
    unsigned char* data;
} Image;

Image* image_load(const char* filename);
int image_save(const char* filename, const Image* img);
void image_free(Image* img);

#endif // IMAGE_H
