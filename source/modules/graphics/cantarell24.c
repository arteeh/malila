#include "cantarell24.h"

const uint8_t cantarell24[95][54] = {
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,254,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,31,31,31,0,0,31,31,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,192,192,192,192,254,254,192,192,192,192,254,254,192,192,192,192,0,0,48,48,48,48,255,255,48,48,48,48,255,255,48,48,48,48,0,0,0,0,0,0,7,7,0,0,0,0,7,7,0,0,0,0,0},
	{0,0,0,224,240,176,24,31,31,24,24,16,0,0,0,0,0,0,0,0,0,64,193,195,195,199,198,198,254,124,24,0,0,0,0,0,0,0,0,0,0,0,0,15,15,0,0,0,0,0,0,0,0,0},
	{0,112,220,132,4,140,120,0,0,128,224,112,28,14,6,0,0,0,0,0,0,129,193,240,56,28,7,3,240,24,8,24,240,0,0,0,0,4,6,7,1,0,0,0,0,0,1,2,2,2,1,0,0,0},
	{0,0,0,0,120,252,206,134,6,134,198,126,60,0,0,0,0,0,0,0,192,240,56,12,7,7,7,15,24,112,224,192,224,48,24,12,0,0,1,3,7,6,12,12,4,6,6,3,1,1,3,7,6,4},
	{0,31,31,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,224,248,30,6,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,31,126,240,192,0,0,0,0,0,0,0,0,0,0},
	{0,2,15,124,240,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,120,0,0,0,0,0,0,0,0,0,0,0,0,128,224,248,63,7,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,16,24,176,176,224,254,238,176,176,24,16,0,0,0,0,0,0,0,1,3,1,1,0,15,14,1,1,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,240,240,0,0,0,0,0,0,0,0,0,0,24,24,24,24,24,24,255,255,24,24,24,24,24,24,0,0,0,0,0,0,0,0,0,0,7,7,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,56,62,14,2,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,12,12,12,12,12,12,12,12,12,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,14,14,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,224,252,30,2,0,0,0,0,0,0,0,0,0,0,0,192,248,127,15,1,0,0,0,0,0,0,0,0,0,0,0,0,14,15,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,240,248,28,14,6,6,6,6,6,12,60,240,192,0,0,0,0,15,127,255,128,0,0,0,0,0,0,0,224,255,63,0,0,0,0,0,0,1,3,7,6,6,6,6,6,3,1,0,0,0,0,0},
	{0,0,0,0,12,12,14,6,254,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,6,7,7,6,6,6,6,0,0,0,0},
	{0,0,0,12,6,6,6,6,6,6,14,156,252,248,0,0,0,0,0,0,0,0,192,224,112,56,28,14,7,3,1,0,0,0,0,0,0,0,0,7,7,7,6,6,6,6,6,6,6,6,0,0,0,0},
	{0,0,0,12,6,6,6,6,6,6,142,252,120,0,0,0,0,0,0,0,0,0,0,0,3,3,7,7,7,157,252,248,0,0,0,0,0,0,4,6,6,6,12,14,6,6,7,3,1,0,0,0,0,0},
	{0,0,0,0,0,128,224,120,30,6,254,254,0,0,0,0,0,0,0,0,112,124,111,99,97,96,96,96,255,255,96,96,96,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,0,0,0,0,0,0},
	{0,0,0,254,254,6,6,6,6,6,6,6,6,6,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3,135,254,252,0,0,0,0,0,0,6,6,6,6,6,6,6,6,7,3,3,0,0,0,0,0},
	{0,0,0,224,240,56,12,140,134,134,134,6,6,0,0,0,0,0,0,0,127,255,207,3,1,1,1,1,3,7,254,252,0,0,0,0,0,0,0,1,3,7,6,6,6,6,6,3,3,0,0,0,0,0},
	{0,0,6,6,6,6,6,6,6,6,198,246,126,30,6,0,0,0,0,0,0,0,0,0,192,240,124,31,7,1,0,0,0,0,0,0,0,0,0,0,4,7,7,1,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,120,252,206,134,6,6,6,134,254,252,48,0,0,0,0,0,0,240,252,140,7,3,3,3,3,7,15,252,248,96,0,0,0,0,0,0,3,3,7,6,6,6,6,6,7,3,1,0,0,0,0},
	{0,0,224,248,28,14,6,6,6,6,6,12,252,240,0,0,0,0,0,0,1,3,7,14,12,12,8,12,140,230,255,63,0,0,0,0,0,0,0,4,6,6,6,6,6,3,3,1,0,0,0,0,0,0},
	{0,0,128,128,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,14,14,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,128,128,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,112,124,28,4,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,128,128,192,192,96,0,0,0,0,0,0,0,12,28,30,54,51,99,97,193,192,192,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0},
	{0,0,0,128,128,128,128,128,128,128,128,128,128,128,128,0,0,0,0,0,0,97,97,97,97,97,97,97,97,97,97,97,97,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,96,96,192,192,128,128,0,0,0,0,0,0,0,0,0,0,0,0,128,128,192,192,97,97,115,51,62,30,28,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,6,6,6,6,6,6,142,252,248,0,0,0,0,0,0,0,0,0,0,0,48,60,30,7,3,1,0,0,0,0,0,0,0,0,0,0,0,0,7,7,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,128,192,224,112,56,24,24,24,12,12,12,12,28,24,0,0,240,254,31,1,0,0,248,254,6,3,3,1,1,3,254,255,0,0,1,15,63,120,224,192,195,135,142,140,12,8,136,140,135,31},
	{0,0,0,0,0,0,224,252,30,14,126,240,128,0,0,0,0,0,0,0,0,192,248,63,55,48,48,48,48,51,63,126,240,128,0,0,0,0,6,7,1,0,0,0,0,0,0,0,0,0,3,7,4,0},
	{0,0,0,0,254,254,6,6,6,6,6,6,142,252,120,0,0,0,0,0,0,0,255,255,2,2,2,3,3,3,7,14,252,248,0,0,0,0,0,0,7,7,6,6,6,6,6,6,6,3,3,1,0,0},
	{0,0,0,0,224,240,56,28,12,6,6,6,6,6,6,6,14,0,0,0,0,6,127,255,192,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,7,6,6,6,6,6,6,6,0},
	{0,0,0,0,254,254,6,6,6,6,6,6,6,12,28,56,240,224,0,0,0,0,255,255,0,0,0,0,0,0,0,0,128,224,255,63,0,0,0,0,7,7,6,6,6,6,6,6,7,3,3,1,0,0},
	{0,0,0,0,254,254,6,6,6,6,6,6,6,6,0,0,0,0,0,0,0,0,255,255,6,6,6,6,6,6,6,6,0,0,0,0,0,0,0,0,7,7,6,6,6,6,6,6,6,6,0,0,0,0},
	{0,0,0,0,254,254,6,6,6,6,6,6,6,6,0,0,0,0,0,0,0,0,255,255,6,6,6,6,6,6,6,0,0,0,0,0,0,0,0,0,7,7,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,192,240,120,28,12,14,6,6,6,6,6,6,6,12,0,0,0,0,63,255,224,128,0,0,0,0,6,6,6,6,6,254,254,0,0,0,0,0,1,3,3,7,6,6,6,6,6,6,7,3,1},
	{0,0,0,0,254,254,0,0,0,0,0,0,0,0,0,254,254,254,0,0,0,0,255,255,6,6,6,6,6,6,6,6,6,255,255,255,0,0,0,0,7,7,0,0,0,0,0,0,0,0,0,7,7,7},
	{0,0,0,0,254,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,254,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,4,6,6,6,6,7,3,1,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,254,254,0,0,128,192,224,112,28,14,6,2,0,0,0,0,0,0,255,255,2,7,15,61,120,224,192,128,0,0,0,0,0,0,0,0,7,7,0,0,0,0,0,0,1,3,7,6,4,0},
	{0,0,0,0,254,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,6,6,6,6,6,6,6,6,0,0,0,0},
	{0,0,0,0,254,254,30,124,240,192,0,0,0,0,0,192,240,120,0,0,0,0,255,255,0,0,1,7,15,60,48,60,15,3,1,0,0,0,0,0,7,7,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,254,254,30,56,240,192,128,0,0,0,0,0,254,254,0,0,0,0,255,255,0,0,0,3,7,30,60,240,224,128,255,255,0,0,0,0,7,7,0,0,0,0,0,0,0,0,1,7,7,7},
	{0,0,0,192,240,120,28,12,6,6,6,6,6,6,14,28,56,248,0,0,0,63,255,224,128,0,0,0,0,0,0,0,0,0,192,255,0,0,0,0,0,1,3,3,6,6,6,6,6,6,7,3,1,0},
	{0,0,0,0,254,254,6,6,6,6,6,6,14,252,252,112,0,0,0,0,0,0,255,255,4,4,12,4,6,6,6,3,3,0,0,0,0,0,0,0,7,7,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,192,240,120,28,12,6,6,6,6,6,6,14,28,60,248,0,0,0,63,255,224,128,0,0,0,0,16,56,112,224,192,192,255,0,0,0,0,0,1,3,3,6,6,6,6,6,6,6,3,3,3},
	{0,0,0,0,254,254,6,6,6,6,6,6,14,252,252,96,0,0,0,0,0,0,255,255,4,4,4,12,30,126,230,195,1,0,0,0,0,0,0,0,7,7,0,0,0,0,0,0,0,3,7,6,0,0},
	{0,0,0,96,248,252,140,6,6,6,6,6,6,6,6,0,0,0,0,0,0,0,1,3,3,3,7,6,6,14,28,252,248,0,0,0,0,0,0,2,7,6,6,6,6,6,6,6,3,3,1,0,0,0},
	{0,6,6,6,6,6,6,254,254,6,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,254,254,0,0,0,0,0,0,0,0,0,254,254,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,1,3,3,6,6,6,6,6,6,6,7,3,1,0},
	{0,0,6,62,254,224,0,0,0,0,0,0,0,240,254,30,6,0,0,0,0,0,1,15,127,248,192,0,192,248,63,7,0,0,0,0,0,0,0,0,0,0,0,1,7,6,7,1,0,0,0,0,0,0},
	{0,0,6,62,252,192,0,0,0,0,0,192,248,62,30,254,224,0,0,0,0,0,3,31,254,240,0,224,252,31,3,0,0,0,7,127,0,0,0,0,0,0,0,7,7,7,0,0,0,0,0,0,0,0},
	{0,0,0,6,14,60,120,224,192,0,192,240,120,30,14,2,0,0,0,0,0,0,192,224,112,61,15,15,31,120,240,192,128,0,0,0,0,0,6,7,3,1,0,0,0,0,0,0,0,3,7,6,4,0},
	{0,0,6,30,60,240,224,128,0,128,224,120,60,14,6,0,0,0,0,0,0,0,0,0,1,255,255,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,0,0,0,0,0,0,0,0,0},
	{0,0,6,6,6,6,6,6,6,6,198,230,118,62,14,6,0,0,0,0,0,0,192,224,112,60,14,7,3,0,0,0,0,0,0,0,0,0,6,7,7,6,6,6,6,6,6,6,6,6,6,6,0,0},
	{0,0,0,255,255,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,192,192,192,192,0,0,0,0,0,0,0,0,0},
	{2,30,254,240,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,63,252,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,15,15,0,0,0,0,0,0,0,0,0,0},
	{0,3,3,3,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,192,192,192,255,255,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,24,12,6,6,12,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,12,12,12,12,12,12,12,12,12,12,0,0,0,0,0},
	{0,0,0,0,1,3,3,6,6,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,128,128,128,128,0,0,0,0,0,0,0,0,0,0,0,0,193,193,97,97,97,33,35,255,254,0,0,0,0,0,0,0,0,0,7,15,12,12,8,12,4,7,15,0,0,0,0,0,0,0},
	{0,0,255,255,255,128,192,192,192,192,128,0,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,1,3,255,254,0,0,0,0,0,0,0,7,7,7,6,4,4,6,6,3,3,0,0,0,0,0,0},
	{0,0,0,0,0,0,128,128,128,128,0,0,0,0,0,0,0,0,0,0,252,254,7,3,1,1,1,1,1,0,0,0,0,0,0,0,0,0,3,7,14,12,12,12,12,12,12,0,0,0,0,0,0,0},
	{0,0,0,0,128,128,192,192,192,192,128,255,255,0,0,0,0,0,0,0,254,255,1,1,0,0,0,0,0,255,255,0,0,0,0,0,0,0,1,3,7,6,6,4,6,6,2,7,7,0,0,0,0,0},
	{0,0,0,0,0,0,128,128,128,0,0,0,0,0,0,0,0,0,0,0,252,254,103,99,97,97,97,99,127,126,0,0,0,0,0,0,0,0,3,7,14,12,12,12,8,12,12,8,0,0,0,0,0,0},
	{0,0,192,192,252,254,198,198,198,198,6,0,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,128,128,128,0,0,128,128,0,0,0,0,0,0,0,252,254,3,3,1,1,1,1,3,255,255,0,0,0,0,0,0,0,3,7,14,12,12,8,12,12,228,255,63,0,0,0,0,0},
	{0,0,255,255,255,128,128,192,192,192,128,128,0,0,0,0,0,0,0,0,255,255,255,1,0,0,0,1,3,255,254,0,0,0,0,0,0,0,7,7,7,0,0,0,0,0,0,7,7,0,0,0,0,0},
	{0,0,198,198,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,198,198,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,255,255,0,0,0,0,0,128,192,64,0,0,0,0,0,0,0,0,255,255,0,24,60,230,195,129,0,0,0,0,0,0,0,0,0,0,7,7,0,0,0,0,1,3,7,6,0,0,0,0,0,0},
	{0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,128,128,0,0,0,128,128,128,0,0,0,0,128,128,128,0,0,0,255,255,3,3,1,1,1,3,255,255,3,1,1,1,3,7,0,0,15,15,0,0,0,0,0,0,15,15,0,0,0,0,0,0},
	{0,0,128,128,0,0,0,128,128,128,0,0,0,0,0,0,0,0,0,0,255,255,3,3,1,1,1,3,15,255,248,0,0,0,0,0,0,0,15,15,0,0,0,0,0,0,0,15,15,0,0,0,0,0},
	{0,0,0,0,0,0,128,128,128,0,0,0,0,0,0,0,0,0,0,0,252,254,7,3,1,1,1,3,3,143,254,240,0,0,0,0,0,0,3,7,6,12,12,12,12,12,14,7,3,0,0,0,0,0},
	{0,0,128,128,0,0,128,128,128,128,0,0,0,0,0,0,0,0,0,0,255,255,3,1,1,1,1,3,7,254,252,0,0,0,0,0,0,0,255,255,12,12,8,8,12,12,6,7,1,0,0,0,0,0},
	{0,0,0,0,0,0,128,128,128,0,0,128,128,0,0,0,0,0,0,0,252,254,3,1,1,1,1,1,3,255,255,0,0,0,0,0,0,0,3,7,14,12,12,12,12,12,4,255,255,0,0,0,0,0},
	{0,0,128,128,0,0,128,128,128,0,0,0,0,0,0,0,0,0,0,0,255,255,3,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,15,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,128,128,128,128,128,0,0,0,0,0,0,0,0,0,0,30,63,51,49,97,97,225,193,192,0,0,0,0,0,0,0,0,0,12,12,12,8,8,12,12,7,7,0,0,0,0,0,0,0},
	{0,192,192,248,248,192,192,192,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,7,6,4,4,6,0,0,0,0,0,0,0,0,0},
	{0,0,128,128,0,0,0,0,0,0,0,128,128,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,1,7,15,12,12,12,12,12,6,15,15,0,0,0,0,0},
	{0,128,128,0,0,0,0,0,0,0,128,128,0,0,0,0,0,0,0,1,15,126,240,128,0,192,248,63,7,0,0,0,0,0,0,0,0,0,0,0,3,15,14,15,1,0,0,0,0,0,0,0,0,0},
	{0,128,128,0,0,0,0,0,0,0,128,128,0,0,0,0,0,0,0,3,15,126,240,128,0,192,248,31,3,31,252,224,0,0,224,252,0,0,0,0,3,15,12,7,0,0,0,0,0,7,15,15,7,0},
	{0,128,128,0,0,0,0,0,0,0,128,128,0,0,0,0,0,0,0,0,3,7,158,248,112,248,156,15,3,1,0,0,0,0,0,0,0,8,12,15,3,1,0,1,3,15,12,8,0,0,0,0,0,0},
	{0,128,128,0,0,0,0,0,0,0,0,128,128,0,0,0,0,0,0,3,15,126,240,192,0,0,192,248,63,7,0,0,0,0,0,0,0,0,0,0,1,239,254,63,7,0,0,0,0,0,0,0,0,0},
	{0,0,128,128,128,128,128,128,128,128,128,0,0,0,0,0,0,0,0,0,1,1,129,193,241,57,31,7,3,0,0,0,0,0,0,0,0,0,12,14,15,13,12,12,12,12,12,12,0,0,0,0,0,0},
	{0,0,0,0,240,252,14,3,3,0,0,0,0,0,0,0,0,0,0,24,24,124,239,195,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,63,112,192,192,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,127,127,0,0,0,0,0,0,0,0,0,0,0},
	{0,3,3,14,252,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,195,231,126,56,24,0,0,0,0,0,0,0,0,0,0,192,192,112,63,15,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,14,3,3,6,12,12,8,15,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18}
};
