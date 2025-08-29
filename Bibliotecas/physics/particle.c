#include "particle.h"

void particle_update(Particle* p, float dt) {
    p->position.x += p->velocity.x * dt;
    p->position.y += p->velocity.y * dt;
}
