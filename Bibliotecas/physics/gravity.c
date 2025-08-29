#include "gravity.h"

void apply_gravity(Particle* p, float g, float dt) {
    p->velocity.y += g * dt;
}
