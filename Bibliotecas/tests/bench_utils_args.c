#include "../utils/args.h"
#include "../utils/timer.h"
#include <stdio.h>

int main(int argc, char** argv) {
    Timer t;
    char* test_argv[] = {"prog", "-a", "--flag", "value"};
    int test_argc = 4;
    timer_start(&t);
    for (int i = 0; i < 10000; ++i) {
        args_parse(test_argc, test_argv);
    }
    timer_stop(&t);
    printf("Tempo args_parse: %.6f s\n", timer_elapsed(&t));
    return 0;
}
