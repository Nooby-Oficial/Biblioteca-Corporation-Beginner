#ifndef OGG_H
#define OGG_H

// Funções para manipulação de arquivos OGG
int ogg_load(const char* filename);
void ogg_play(int ogg_id);
void ogg_free(int ogg_id);

#endif // OGG_H
