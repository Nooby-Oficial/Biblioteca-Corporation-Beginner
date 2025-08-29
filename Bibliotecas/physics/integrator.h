#ifndef INTEGRATOR_H
#define INTEGRATOR_H

#include "../physics/particle.h"

void euler_integrate(Particle* p, float dt);
void verlet_integrate(Particle* p, float dt);

#endif // INTEGRATOR_H
