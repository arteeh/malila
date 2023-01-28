#include "graphics.h"

void graphicsInit(void)
{
    lcd_t dev;
    dev.driver = &lcd_ili9341_driver;

	BACKLIGHT_ON;

    lcd_init(&dev, );
}

void graphicsSetBrightness(uint8_t newBrightness)
{
	
}