#include "../utils/json.h"
#include "../utils/timer.h"
#include <stdio.h>

int main() {
    Timer t;
    const char* json = "{\"a\":1,\"b\":2}";
    timer_start(&t);
    for (int i = 0; i < 10000; ++i) {
        json_parse(json);
    }
    timer_stop(&t);
    printf("Tempo json parse: %.6f s\n", timer_elapsed(&t));
    return 0;
}
