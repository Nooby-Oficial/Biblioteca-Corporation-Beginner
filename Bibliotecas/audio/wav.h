#ifndef WAV_H
#define WAV_H

// Funções para manipulação de arquivos WAV
int wav_load(const char* filename);
void wav_play(int wav_id);
void wav_free(int wav_id);

#endif // WAV_H
