#include <xtimer.h>
#include <board.h>
#include <cst816s.h>

#include "display.h"
#include "graphics.h"

char threadDisplayUpdateStack[THREAD_STACKSIZE_MAIN];

void *threadDisplayUpdate(void *arg);
