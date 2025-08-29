#ifndef VECTOR2D_H
#define VECTOR2D_H

// Biblioteca de vetor 2D para engine e jogos

typedef struct {
    float x;
    float y;
} Vector2D;

Vector2D vec2_create(float x, float y);
Vector2D vec2_add(Vector2D a, Vector2D b);
Vector2D vec2_sub(Vector2D a, Vector2D b);
Vector2D vec2_scale(Vector2D v, float s);
float vec2_dot(Vector2D a, Vector2D b);
float vec2_length(Vector2D v);
Vector2D vec2_normalize(Vector2D v);

#endif // VECTOR2D_H
