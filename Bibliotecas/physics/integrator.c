#include "integrator.h"

void euler_integrate(Particle* p, float dt) {
    particle_update(p, dt);
}

void verlet_integrate(Particle* p, float dt) {
    // Placeholder para integração de Verlet
    particle_update(p, dt);
}
