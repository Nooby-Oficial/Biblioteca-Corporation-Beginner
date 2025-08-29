#include "timer.h"

void timer_start(Timer* t) {
    t->start = clock();
}

void timer_stop(Timer* t) {
    t->end = clock();
}

double timer_elapsed(Timer* t) {
    return (double)(t->end - t->start) / CLOCKS_PER_SEC;
}
