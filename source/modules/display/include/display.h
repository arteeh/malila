#ifndef DISPLAY_H
#define DISPLAY_H

#include <screen_dev.h>
#include <disp_dev.h>
#include <ili9341.h>
#include <ili9341_params.h>
#include <ili9341_disp_dev.h>

#define BLACK	0x0000 // 0
#define DARK	0x3fff // 65535 / 4
#define LIGHT	0x7fff // 65535 / 4 * 2
#define WHITE	0xffff // 65535

extern ili9341_t display;
extern screen_dev_t screen;

void displayInit(void);
void displaySetBrightness(uint8_t newBrightness);
void displayUpdate(void);
void displayWrite(uint8_t x, uint8_t y, uint8_t color);
uint8_t displayReadCurrent(uint8_t x, uint8_t y);
uint8_t displayReadNext(uint8_t x, uint8_t y);

#endif // DISPLAY_H
