#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <ili9341.h>
#include <ili9341_params.h>

#define LOW 0
#define MID 1
#define HIGH 2

ili9341_t display;

void displayInit(void);
void displaySetBrightness(uint8_t brightness);

#endif // GRAPHICS_H
