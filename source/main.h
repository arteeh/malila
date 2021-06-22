#include <xtimer.h>
#include <board.h>
#include <cst816s.h>

#include "display.h"
#include "graphics.h"

char threaddisplayupdatestack[THREAD_STACKSIZE_MAIN];

void *threaddisplayupdate(void *arg);
