#ifndef INPUT_H
#define INPUT_H

// Placeholder para funções de entrada

typedef enum { KEY_UP, KEY_DOWN, KEY_LEFT, KEY_RIGHT, KEY_SPACE, KEY_ESC } Key;

void input_poll();
int input_is_key_down(Key key);

#endif // INPUT_H
