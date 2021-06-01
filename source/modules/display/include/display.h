#ifndef DISPLAY_H
#define DISPLAY_H

#include <screen_dev.h>
#include <disp_dev.h>
#include <ili9341.h>
#include <ili9341_params.h>
#include <ili9341_disp_dev.h>

extern ili9341_t display;
extern screen_dev_t screen;

void displayInit(void);
void displaySetBrightness(uint8_t newBrightness);
void displayUpdate(void);
void displayWritePixel(uint8_t x, uint8_t y, uint8_t color);
uint8_t displayReadCurrent(uint8_t x, uint8_t y);
uint8_t displayReadNext(uint8_t x, uint8_t y);

#endif // DISPLAY_H
