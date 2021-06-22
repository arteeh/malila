#include "display.h"

ili9341_t display;
screen_dev_t screen;

uint8_t currentframe[60][240];
uint8_t nextframe[60][240];

void displayinit(void)
{
	screen.display = (disp_dev_t *)&display;
	screen.display->driver = &ili9341_disp_dev_driver;

	disp_dev_backlight_on();

	ili9341_init(&display,&ili9341_params[0]);
	
	ili9341_fill(&display,0,240,0,240,0xFF00);
}

void displaybrightness(uint8_t newbrightness)
{
	static uint8_t currentbrightness;
	
	if(100<newbrightness)
	{
		return;
	}
	
	if(newbrightness==currentbrightness)
	{
		return;
	}
	
	if(newbrightness<33)
	{
		gpio_clear(LCD_BACKLIGHT_LOW);
		gpio_set(LCD_BACKLIGHT_MID);
		gpio_set(LCD_BACKLIGHT_HIGH);
	}
	else if(33<=newbrightness&&newbrightness<=66)
	{
		gpio_set(LCD_BACKLIGHT_LOW);
		gpio_clear(LCD_BACKLIGHT_MID);
		gpio_set(LCD_BACKLIGHT_HIGH);
	}
	else if(66<newbrightness)
	{
		gpio_set(LCD_BACKLIGHT_LOW);
		gpio_set(LCD_BACKLIGHT_MID);
		gpio_clear(LCD_BACKLIGHT_HIGH);
	}
	
	currentbrightness = newbrightness;
}

void displayupdate(void)
{
	for(uint8_t x=0;x<240;x++)
	{
		for(uint8_t y=0;y<240;y++)
		{
			uint8_t curr = displayread(currentframe,x,y);
			uint8_t next = displayread(nextframe,x,y);
			
			if(curr != next)
			{
				switch(next)
				{
					case 0:
						ili9341_fill(&display,x,x,y,y,black);
						break;
					case 1:
						ili9341_fill(&display,x,x,y,y,dark);
						break;
					case 2:
						ili9341_fill(&display,x,x,y,y,light);
						break;
					case 3:
						ili9341_fill(&display,x,x,y,y,white);
						break;
				}
				
				currentframe[x/4][y] = nextframe[x/4][y];
			}
		}
	}
}

// write a pixel to the next frame
void displaywrite(uint8_t x,uint8_t y,uint8_t color)
{
	// shift the two bits in the right spot in the byte
	color = color<<(6-(x%4));
	
	// insert it into the existing byte
	uint8_t byte = nextframe[x/4][y]|color;
	
	// write it to the frame
	nextframe[x/4][y] = byte;
}

// read a pixel from a frame
uint8_t displayread(uint8_t frame[60][240],uint8_t x,uint8_t y)
{
	// get the byte the pixel is in
	uint8_t byte = frame[x/4][y];
	
	// shift the two bits we need to lsb
	uint8_t color = byte>>(6-(x%4));
	
	// erase the rest
	color &= 0b00000011;
	
	return color;
}

