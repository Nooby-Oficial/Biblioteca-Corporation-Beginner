#ifndef FONT_H
#define FONT_H

typedef struct Font Font;

Font* font_load(const char* filename, int size);
void font_draw_text(Font* font, int x, int y, const char* text);
void font_free(Font* font);

#endif // FONT_H
