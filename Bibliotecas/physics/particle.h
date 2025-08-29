#ifndef PARTICLE_H
#define PARTICLE_H

#include "../math/vector2d.h"

typedef struct {
    Vector2D position;
    Vector2D velocity;
    float mass;
} Particle;

void particle_update(Particle* p, float dt);

#endif // PARTICLE_H
