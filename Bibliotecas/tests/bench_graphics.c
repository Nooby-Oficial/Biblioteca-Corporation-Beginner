#include "../graphics/draw.h"
#include "../graphics/color.h"
#include "../utils/timer.h"
#include <stdio.h>

int main() {
    Timer t;
    Color c = color_rgba(255,0,0,255);
    timer_start(&t);
    for (int i = 0; i < 1000000; ++i) {
        draw_line(0,0,100,100,c);
        draw_rect(10,10,50,50,c);
        draw_circle(20,20,10,c);
    }
    timer_stop(&t);
    printf("Tempo graphics: %.6f s\n", timer_elapsed(&t));
    return 0;
}
