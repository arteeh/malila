#include "display.h"

ili9341_t display;
screen_dev_t screen;

uint8_t frame[240][240];

void displayinit(void)
{
	screen.display = (disp_dev_t *)&display;
	screen.display->driver = &ili9341_disp_dev_driver;

	disp_dev_backlight_on();

	ili9341_init(&display, &ili9341_params[0]);
}

void displaysetbrightness(uint8_t newbrightness)
{
	static uint8_t currentbrightness;
	
	if(100 < newbrightness)
	{
		return;
	}
	
	if(newbrightness == currentbrightness)
	{
		return;
	}
	
	if(newbrightness < 33)
	{
		gpio_clear(LCD_BACKLIGHT_LOW);
		gpio_set(LCD_BACKLIGHT_MID);
		gpio_set(LCD_BACKLIGHT_HIGH);
	}
	else if(33 <= newbrightness && newbrightness <= 66)
	{
		gpio_set(LCD_BACKLIGHT_LOW);
		gpio_clear(LCD_BACKLIGHT_MID);
		gpio_set(LCD_BACKLIGHT_HIGH);
	}
	else if(66 < newbrightness)
	{
		gpio_set(LCD_BACKLIGHT_LOW);
		gpio_set(LCD_BACKLIGHT_MID);
		gpio_clear(LCD_BACKLIGHT_HIGH);
	}
	
	currentbrightness = newbrightness;
}

void displaywritepixel(uint8_t x, uint8_t y, uint8_t color)
{
	if(frame[x][y] != color)
	{
		frame[x][y] = color;
		ili9341_fill(&display,x,x,y,y,display8to16(color));
	}
}

void displaywriterectangle(uint8_t x, uint8_t y, uint8_t width, uint8_t height, uint8_t color)
{
	for(uint8_t i = x; i < width; i++)
	{
		for(uint8_t j = y; j < height; j++)
		{
			displaywritepixel(i,j,color);
		}
	}
}

uint16_t display8to16(uint8_t color)
{
	uint8_t maskrg = 0b00000111;
	uint8_t maskb = 0b00000011;
	uint8_t r = (color >> 5) & maskrg;
	uint8_t g = (color >> 2) & maskrg;
	uint8_t b = color & maskb;
	
	uint16_t retVal = (r * 7 / 255) << (5 + (g * 7 / 255)) << (2 + (b * 3 / 255));
	
	return retVal;
}

