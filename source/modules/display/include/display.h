#ifndef DISPLAY_H
#define DISPLAY_H

#include <ili9341.h>
#include <ili9341_params.h>

#define LOW 0
#define MID 1
#define HIGH 2

extern ili9341_t display;

void displayInit(void);
void displaySetBrightness(uint8_t brightness);

#endif // DISPLAY_H
