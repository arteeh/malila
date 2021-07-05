#ifndef graphicsh
#define graphicsh

#include <string.h>
#include "display.h"
#include "cantarell24.h"
#include "cantarell64.h"

#define charsmall(c) bitmap_24_c

// font size
enum textsize{small,big};

void graphicsinit(void);
void graphicsclear(void);
void graphicsrectangle(uint8_t x, uint8_t y, uint8_t width, uint8_t length, uint8_t color);
void graphicscharacter(uint8_t x, uint8_t y, char c, enum textsize ts, uint8_t color);

#endif // graphicsh
