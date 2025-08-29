#include "../utils/fileutils.h"
#include "../utils/timer.h"
#include <stdio.h>

int main() {
    Timer t;
    timer_start(&t);
    for (int i = 0; i < 1000; ++i) {
        file_exists("bench_utils_file.c");
    }
    timer_stop(&t);
    printf("Tempo file exists: %.6f s\n", timer_elapsed(&t));
    return 0;
}
