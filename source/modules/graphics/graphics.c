#include <graphics.h>

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
