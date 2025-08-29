#ifndef MATRIX3D_H
#define MATRIX3D_H

typedef struct {
    float m[3][3];
} Matrix3D;

Matrix3D mat3_identity();
Matrix3D mat3_scale(float sx, float sy, float sz);
Matrix3D mat3_rotate_x(float angle);
Matrix3D mat3_rotate_y(float angle);
Matrix3D mat3_rotate_z(float angle);
// ... outros métodos

#endif // MATRIX3D_H
