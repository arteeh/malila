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

// draw a character to the buffer. returns the pointer after writing
uint8_t graphicscharacter(uint8_t x, uint8_t y, char c, enum textsize ts, uint8_t color)
{
	uint16_t size;
	uint8_t offset;
	uint8_t height;
	int8_t width;
	
	// get data from either the 24 of 64 pixel font
	if(ts == small)
	{
		height = 24;
		size = cantarell24size;
		offset = cantarell24asciioffset;
		
		// make sure we're not out of bounds
		if(' ' > c || c > '~') c = '?';
		else c = c - offset;
	}
	else
	{
		height = 64;
		size = cantarell64size;
		offset = cantarell64asciioffset;
		
		// make sure we're not out of bounds
		if('0' > c || c > ':') c = '0';
		else c = c - offset;
	}
	
	uint8_t character = (uint8_t) c;
	uint8_t charbitmap[size];
	
	if(ts == small)
	{
		memcpy(charbitmap,cantarell24[character],size);
		width = cantarell24width[character];
	}
	else
	{
		memcpy(charbitmap,cantarell64[character],size);
		width = cantarell64width[character];
	}
	
	// loop through the array
	for(uint8_t byte = 0 ; byte < size ; byte++)
	{
		// the byterow we're in
		// the font is stored as horizontal slabs ("byterows") that are 8 bits high, and $width long.
		// so a font with height of 24 pixels has 3 byterows.
		uint8_t byterow = byte / width;
		uint8_t byterowoffset = byterow * 8;
		
		// xx goes from 0 to 17 per byterow, plus the offset
		uint16_t xx = x + (byte % width);
		
		// loop through each bit in the byte, lsb to msb
		for(uint8_t bit = 0; bit < 8 ; bit++)
		{
			uint8_t pix = charbitmap[byte] >> bit;
			pix &= 1; // 1 = 0000 0001
			
			// yy goes from 0 to 7 for byterow 0, 8 to 15 for byterow 1, etc
			uint16_t yy = y + (bit + byterowoffset);
			
			// write the pixel
			if(pix) displaywrite(xx,yy,color);
		}
	}
	
	// move the x to where the next character can be written to
	// if out of bounds, set to 0
	if(width < 0) x = x + (width * (-1));
	else if((x + width + width) > 240) x = 0;
	else x = x + width + 4;
	
	return x;
}

