#include "uuid.h"
#include <stdio.h>

void uuid_generate(char* buffer, int maxlen) {
    snprintf(buffer, maxlen, "123e4567-e89b-12d3-a456-426614174000");
}
