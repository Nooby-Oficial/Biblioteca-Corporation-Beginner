#include "../ai/astar.h"
#include "../utils/timer.h"
#include <stdio.h>

int main() {
    Timer t;
    int map[10][10] = {0};
    timer_start(&t);
    for (int i = 0; i < 1000; ++i) {
        astar_search((int*)map, 10, 10, 0, 0, 9, 9); // Placeholder
    }
    timer_stop(&t);
    printf("Tempo AI: %.6f s\n", timer_elapsed(&t));
    return 0;
}
