#ifndef display_h
#define display_h

#include <screen_dev.h>
#include <disp_dev.h>
#include <ili9341.h>
#include <ili9341_params.h>
#include <ili9341_disp_dev.h>

extern ili9341_t display;
extern screen_dev_t screen;

void displayinit(void);
void displaysetbrightness(uint8_t newbrightness);
void displaywritepixel(uint8_t x, uint8_t y, uint8_t color);
void displaywriterectangle(uint8_t x, uint8_t y, uint8_t width, uint8_t height, uint8_t color);
uint16_t display8to16(uint8_t color);

#endif // display_h
