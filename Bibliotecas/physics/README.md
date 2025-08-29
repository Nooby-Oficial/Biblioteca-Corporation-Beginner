# Módulo physics

Funções de colisão e física básica.

## Exemplos de uso

```c
#include "aabb.h"
AABB box1 = {vec2_create(0,0), vec2_create(1,1)};
AABB box2 = {vec2_create(0.5,0.5), vec2_create(1.5,1.5)};
int colide = aabb_intersect(box1, box2);
```
