#ifndef displayh
#define displayh

#include <screen_dev.h>
#include <disp_dev.h>
#include <ili9341.h>
#include <ili9341_params.h>
#include <ili9341_disp_dev.h>

#define black	0x0000 // 0
#define dark	0x3fff // 65535 / 4
#define light	0x7fff // 65535 / 4 * 2
#define white	0xffff // 65535

extern ili9341_t display;
extern screen_dev_t screen;

void displayinit(void);
void displaybrightness(uint8_t newbrightness);
void displayupdate(void);
void displaywrite(uint8_t x,uint8_t y,uint8_t color);
uint8_t displayread(uint8_t frame[60][240],uint8_t x,uint8_t y);

#endif // DISPLAY_H
