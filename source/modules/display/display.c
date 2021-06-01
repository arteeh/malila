#include "display.h"

#define BLACK	0x0000 // 0
#define DARK	0x3fff // 65535 / 4
#define LIGHT	0x7fff // 65535 / 4 * 2
#define WHITE	0xffff // 65535

ili9341_t display;
screen_dev_t screen;

uint8_t frameCurrent[60][240];
uint8_t frameNext[60][240];

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
	for(uint8_t x = 0; x < 240; x++)
	{
		for(uint8_t y = 0; y < 240; y++)
		{
			uint8_t curr = displayReadCurrent(x,y);
			uint8_t next = displayReadNext(x,y);
			
			if(curr != next)
			{
				switch(next)
				{
					case 0:
						ili9341_fill(&display,x,x,y,y,BLACK);
						break;
					case 1:
						ili9341_fill(&display,x,x,y,y,DARK);
						break;
					case 2:
						ili9341_fill(&display,x,x,y,y,LIGHT);
						break;
					case 3:
						ili9341_fill(&display,x,x,y,y,WHITE);
						break;
				}
				
				frameCurrent[x / 4][y] = frameNext[x / 4][y];
			}
		}
	}
}

// Write a pixel to the next frame
void displayWritePixel(uint8_t x, uint8_t y, uint8_t color)
{
	// shift the two bits in the right spot in the byte
	color = color << (6 - (x % 4));
	
	// insert it into the existing byte
	uint8_t byte = frameNext[x / 4][y] | color;
	
	// write it to the frame
	frameNext[x / 4][y] = byte;
}

// Read a pixel from a frame
uint8_t displayReadCurrent(uint8_t x, uint8_t y)
{
	// get the byte the pixel is in
	uint8_t byte = frameCurrent[x / 4][y];
	
	// shift the two bits we need to lsb
	uint8_t color = byte >> (6 - (x % 4));
	
	// erase the rest
	color &= 0b00000011;
	
	return color;
}

// Read a pixel from a frame
uint8_t displayReadNext(uint8_t x, uint8_t y)
{
	// get the byte the pixel is in
	uint8_t byte = frameNext[x / 4][y];
	
	// shift the two bits we need to lsb
	uint8_t color = byte >> (6 - (x % 4));
	
	// erase the rest
	color &= 0b00000011;
	
	return color;
}

