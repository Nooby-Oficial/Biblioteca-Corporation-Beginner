#ifndef MATRIX2D_H
#define MATRIX2D_H

// Biblioteca de matriz 2D para engine e jogos

typedef struct {
    float m[2][2];
} Matrix2D;

Matrix2D mat2_identity();
Matrix2D mat2_scale(float sx, float sy);
Matrix2D mat2_rotate(float angle);
Vector2D mat2_mul_vec2(Matrix2D m, Vector2D v);
Matrix2D mat2_mul(Matrix2D a, Matrix2D b);

#endif // MATRIX2D_H
