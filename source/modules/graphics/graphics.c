#include "graphics.h"

void graphicsinit(void)
{
	graphicsclear();
}

// empty the buffer
void graphicsclear(void)
{
	graphicsrectangle(0,0,240,240,0);
}

// draw a rectangle to the buffer
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

// draw a character to the buffer
void graphicscharacter(uint8_t x, uint8_t y, char c, enum textsize ts, uint8_t color)
{
	uint16_t size;
	uint8_t offset;
	uint8_t width;
	uint8_t character = (uint8_t) c;
	
	if(ts == small)
	{
		size = cantarell24size;
		offset = cantarell24asciioffset;
		if(' ' > c || c > '~') c = '?';
		else c = c - offset;
	}
	else
	{
		size = cantarell64size;
		offset = cantarell64asciioffset;
		if('0' > c || c > ':') c = '0';
		else c = c - offset;
	}
	
	uint8_t charbitmap[size];
	
	if(ts == small)
	{
		memcpy(charbitmap,cantarell24[character],size);
		width = cantarell24width[c];
	}
	else
	{
		memcpy(charbitmap,cantarell64[character],size);
		width = cantarell64width[c];
	}
	
	// loop through the array
	for(uint8_t byte = 0 ; byte < size ; byte++)
	{
		// loop through each bit in the byte
		for(uint8_t bit = 0; bit < 8 ; bit++)
		{
			uint8_t pix = charbitmap[byte] >> (7 - bit);
			
			pix &= 1; // 1 = 0000 0001
			
			// get x and y to write the pixel to
			uint16_t totalbit = (byte * 8) + bit;
			
			uint16_t xx = x + (totalbit % width);
			uint16_t yy = y + (totalbit / width);
			
			if(pix)	displaywrite(xx,yy,color);
			else	displaywrite(xx,yy,1);
		}
	}
}

