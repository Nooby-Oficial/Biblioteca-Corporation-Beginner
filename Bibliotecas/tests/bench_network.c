#include "../network/net.h"
#include "../utils/timer.h"
#include <stdio.h>

int main() {
    Timer t;
    timer_start(&t);
    for (int i = 0; i < 10000; ++i) {
        net_resolve_hostname("localhost"); // Placeholder
    }
    timer_stop(&t);
    printf("Tempo network: %.6f s\n", timer_elapsed(&t));
    return 0;
}
