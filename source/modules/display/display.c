#include "display.h"

ili9341_t display;
screen_dev_t screen;

uint8_t currentframe[60][240];
uint8_t nextframe[60][240];

void displayinit(void)
{
	for(uint8_t y = 0 ; y < 240 ; y++)
	{
		for(uint8_t x = 0 ; x < 60 ; x++)
		{
			currentframe[x][y] = 0;
			nextframe[x][y] = 0;
		}
	}
	
#if BOARD == pinetime
	screen.display = (disp_dev_t *)&display;
	screen.display -> driver = &ili9341_disp_dev_driver;

	disp_dev_backlight_on();

	ili9341_init(&display,&ili9341_params[0]);
	
	ili9341_fill(&display,0,240,0,240,0x0000);
#endif
}

void displaybrightness(uint8_t newbrightness)
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
#if BOARD == pinetime && BOARD != native
		gpio_clear(LCD_BACKLIGHT_LOW);
		gpio_set(LCD_BACKLIGHT_MID);
		gpio_set(LCD_BACKLIGHT_HIGH);
#endif
	}
	else if(33 <= newbrightness && newbrightness <= 66)
	{
#if BOARD == pinetime && BOARD != native
		gpio_set(LCD_BACKLIGHT_LOW);
		gpio_clear(LCD_BACKLIGHT_MID);
		gpio_set(LCD_BACKLIGHT_HIGH);
#endif
	}
	else if(66 < newbrightness)
	{
#if BOARD == pinetime && BOARD != native
		gpio_set(LCD_BACKLIGHT_LOW);
		gpio_set(LCD_BACKLIGHT_MID);
		gpio_clear(LCD_BACKLIGHT_HIGH);
#endif
	}
	
	currentbrightness = newbrightness;
}

void displayupdate(void)
{
#if BOARD != pinetime && BOARD == native
	// Clear the screen
	printf("\033[2J");
#endif
	for(uint8_t y = 0 ; y < 240 ; y++)
	{
		for(uint8_t x = 0 ; x < 240 ; x++)
		{
			uint8_t next = displayread(nextframe,x,y);
#if BOARD != pinetime && BOARD == native
			switch(next)
			{
				case 0:
					printf("\033[48;2;0;0;0m  ");
					printf("\033[0m");
					break;
				case 1:
					printf("\033[48;2;85;85;85m  ");
					printf("\033[0m");
					break;
				case 2:
					printf("\033[48;2;170;170;170m  ");
					printf("\033[0m");
					break;
				case 3:
					printf("\033[48;2;255;255;255m  ");
					printf("\033[0m");
					break;
			}
#endif
#if BOARD == pinetime && BOARD != native
			uint8_t curr = displayread(currentframe,x,y);
			if(curr != next)
			{
				switch(next)
				{
					case 0:
						ili9341_fill(&display,x,x,y,y,black);
						break;
					case 1:
						ili9341_fill(&display,x,x,y,y,black);
						break;
					case 2:
						ili9341_fill(&display,x,x,y,y,black);
						break;
					case 3:
						ili9341_fill(&display,x,x,y,y,black);
						break;
				}
				displaywriteany(currentframe,x,y,next);
			}
#endif
		}
#if BOARD != pinetime && BOARD == native
		printf("\n");
#endif
	}
}

// write a pixel to the next frame
void displaywrite(uint8_t x , uint8_t y , uint8_t color)
{
	displaywriteany(nextframe,x,y,color);
}

// write a pixel to the a frame
void displaywriteany(uint8_t frame[60][240] , uint8_t x , uint8_t y , uint8_t color)
{
	// Determine the amount of left shifts to get the 2 bits in the right place
	uint8_t shiftstoleft = 6 - ( ( x % 4 ) * 2 );
	
	// shift the two bits in the right spot in the byte
	uint8_t shiftedcolor = color << shiftstoleft;
	
	// clear the previous bits
	frame[x/4][y] &= ~(3 << shiftstoleft); // 3 = 0000 0011
	
	// insert it into the existing byte in the frame
	frame[x/4][y] |= shiftedcolor;
}

// read a pixel from a frame
uint8_t displayread(uint8_t frame[60][240] , uint8_t x , uint8_t y)
{	
	// shift the two bits we need to lsb
	uint8_t color = frame[x / 4][y] >> ( 6 - ( ( x % 4 ) * 2 ) );
	
	// clear the rest
	color &= 3; // 3 = 00000011
	
	return color;
}

