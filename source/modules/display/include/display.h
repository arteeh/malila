#ifndef DISPLAY_H
#define DISPLAY_H

#include <screen_dev.h>
#include <disp_dev.h>
#include <ili9341.h>
#include <ili9341_params.h>
#include <ili9341_disp_dev.h>

#define LOW 0
#define MID 1
#define HIGH 2

extern ili9341_t display;
extern screen_dev_t screen;

void displayInit(void);
void displaySetBrightness(uint8_t brightness);

#endif // DISPLAY_H
