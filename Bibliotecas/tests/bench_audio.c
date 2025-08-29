#include "../audio/audio.h"
#include "../utils/timer.h"
#include <stdio.h>

int main() {
    Timer t;
    timer_start(&t);
    for (int i = 0; i < 100000; ++i) {
        audio_mix_samples(NULL, NULL, 0); // Placeholder
    }
    timer_stop(&t);
    printf("Tempo audio: %.6f s\n", timer_elapsed(&t));
    return 0;
}
