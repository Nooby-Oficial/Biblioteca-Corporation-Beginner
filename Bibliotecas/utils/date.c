#include "date.h"
#include <time.h>
#include <stdio.h>

void date_now(char* buffer, int maxlen) {
    time_t t = time(NULL);
    struct tm* tm_info = localtime(&t);
    strftime(buffer, maxlen, "%Y-%m-%d %H:%M:%S", tm_info);
}
