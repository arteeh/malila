#include <board.h>
#include <ili9341.h>
#include <cst816s.h>

ili9341_params_t displayParams =
{
	ILI9341_PARAM_SPI,
	ILI9341_PARAM_SPI_CLK,
	ILI9341_PARAM_SPI_MODE,
	ILI9341_PARAM_CS,
	ILI9341_PARAM_DCX,
	ILI9341_PARAM_RST,
	ILI9341_PARAM_RGB,
	ILI9341_PARAM_INVERTED,
	ILI9341_PARAM_NUM_LINES
};

ili9341_t display =
{
	&displayParams
};

int main(void)
{
	board_init();
	ili9341_init(&display,&displayParams);
	
	ili9341_fill(&display,50,50,100,100,1234);
	
	return 0;
}
