#include "graphics.h"

void graphicsinit(void)
{
	graphicsrectangle(0,0,240,240,0);
}

void graphicsclear(void)
{
	graphicsrectangle(0,0,240,240,0);
}

void graphicsrectangle(uint8_t x, uint8_t y, uint8_t width, uint8_t length, uint8_t color)
{
	for(uint8_t i = y ; i < length ; i++)
	{
		for(uint8_t j = x ; j < width ; j++)
		{
			displaywrite(j,i,color);
		}
	}
}
