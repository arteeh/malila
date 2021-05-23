#include "display.h"

ili9341_t display;
screen_dev_t screen;

uint16_t frameCurrent[240][240];
uint16_t frameNext[240][240];

void displayInit(void)
{
	screen.display = (disp_dev_t *)&display;
	screen.display->driver = &ili9341_disp_dev_driver;

	disp_dev_backlight_on();

	ili9341_init(&display, &ili9341_params[0]);
	
	ili9341_fill(&display,0,240,0,240,0xFF00);
}

void displaySetBrightness(uint8_t newBrightness)
{
	static uint8_t currentBrightness;
	
	if(100 < newBrightness)
	{
		return;
	}
	
	if(newBrightness == currentBrightness)
	{
		return;
	}
	
	if(newBrightness < 33)
	{
		gpio_clear(LCD_BACKLIGHT_LOW);
		gpio_set(LCD_BACKLIGHT_MID);
		gpio_set(LCD_BACKLIGHT_HIGH);
	}
	else if(33 <= newBrightness && newBrightness <= 66)
	{
		gpio_set(LCD_BACKLIGHT_LOW);
		gpio_clear(LCD_BACKLIGHT_MID);
		gpio_set(LCD_BACKLIGHT_HIGH);
	}
	else if(66 < newBrightness)
	{
		gpio_set(LCD_BACKLIGHT_LOW);
		gpio_set(LCD_BACKLIGHT_MID);
		gpio_clear(LCD_BACKLIGHT_HIGH);
	}
	
	currentBrightness = newBrightness;
}

void displayUpdate(void)
{
	for(uint16_t x = 0; x < 240; x++)
	{
		for(uint16_t y = 0; y < 240; y++)
		{
			if(frameNext[x][y] != frameCurrent[x][y])
			{
				displayWritePixel(x,y,frameCurrent[x][y]);
				frameCurrent[x][y] = frameNext[x][y];
			}
		}
	}
}

void displayWritePixel(uint8_t x, uint8_t y, uint16_t color)
{
	ili9341_fill(&display,x,x,y,y,color);
}

