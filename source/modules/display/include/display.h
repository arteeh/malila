#ifndef displayh
#define displayh

#include <stdio.h>
#include <screen_dev.h>
#include <disp_dev.h>
#include <ili9341.h>
#include <ili9341_params.h>
#include <ili9341_disp_dev.h>

#define BP "%c%c%c%c%c%c%c%c"
#define BB(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0') 

#define black	0x0000 // 65535 / 3 * 0
#define dark	0x5555 // 65535 / 3 * 1
#define light	0xaaaa // 65535 / 3 * 2
#define white	0xffff // 65535 / 3 * 3

extern ili9341_t display;
extern screen_dev_t screen;

void displayinit(void);
void displaybrightness(uint8_t newbrightness);
void displayupdate(void);
void displaywrite(uint8_t x , uint8_t y , uint8_t color);
void displaywriteany(uint8_t frame[60][240] , uint8_t x , uint8_t y , uint8_t color);
uint8_t displayread(uint8_t frame[60][240] , uint8_t x , uint8_t y);

#endif // displayh
