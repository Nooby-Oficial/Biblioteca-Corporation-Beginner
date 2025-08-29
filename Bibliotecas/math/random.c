#include "random.h"
#include <stdlib.h>
#include <time.h>

void random_seed(unsigned int seed) {
    srand(seed);
}

float random_float() {
    return (float)rand() / (float)RAND_MAX;
}

int random_int(int min, int max) {
    return min + rand() % (max - min + 1);
}
