#include "display.h"

ili9341_t display;

uint8_t buffer[240][240];
uint8_t bufferNext[240][240];

void displayInit(void)
{
	BACKLIGHT_ON;
	ili9341_init(&display, &ili9341_params[0]);
}

void displaySetBrightness(uint8_t brightness)
{
	gpio_set(LCD_BACKLIGHT_LOW);
	gpio_set(LCD_BACKLIGHT_MID);
	gpio_set(LCD_BACKLIGHT_HIGH);
	
	switch(brightness)
	{
		case LOW:
			gpio_clear(LCD_BACKLIGHT_LOW);
			break;
		case MID:
			gpio_clear(LCD_BACKLIGHT_MID);
			break;
		case HIGH:
			gpio_clear(LCD_BACKLIGHT_HIGH);
			break;
	}
}
