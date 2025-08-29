#ifndef TIMER_H
#define TIMER_H

#include <time.h>

typedef struct {
    clock_t start;
    clock_t end;
} Timer;

void timer_start(Timer* t);
void timer_stop(Timer* t);
double timer_elapsed(Timer* t);

#endif // TIMER_H
