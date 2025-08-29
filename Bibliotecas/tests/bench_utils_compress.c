#include "../utils/compress.h"
#include "../utils/timer.h"
#include <stdio.h>
#include <string.h>

int main() {
    Timer t;
    char src[256] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    char dest[512];
    timer_start(&t);
    for (int i = 0; i < 10000; ++i) {
        compress_lz77(src, strlen(src), dest, sizeof(dest));
    }
    timer_stop(&t);
    printf("Tempo compress_lz77: %.6f s\n", timer_elapsed(&t));
    return 0;
}
