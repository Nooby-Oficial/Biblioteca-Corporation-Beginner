#include "../utils/uuid.h"
#include "../utils/timer.h"
#include <stdio.h>

int main() {
    Timer t;
    char uuid[37];
    timer_start(&t);
    for (int i = 0; i < 100000; ++i) {
        uuid_generate(uuid);
    }
    timer_stop(&t);
    printf("Tempo uuid_generate: %.6f s\n", timer_elapsed(&t));
    return 0;
}
