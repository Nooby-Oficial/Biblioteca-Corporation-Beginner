#ifndef QUATERNION_H
#define QUATERNION_H

typedef struct {
    float w, x, y, z;
} Quaternion;

Quaternion quat_identity();
Quaternion quat_from_axis_angle(float x, float y, float z, float angle);
Quaternion quat_mul(Quaternion a, Quaternion b);
// ... outros métodos

#endif // QUATERNION_H
