#include <xtimer.h>
#include <board.h>
#include <cst816s.h>
#include <graphics.h>

int main(void)
{
	gpio_init(VCC33, GPIO_OUT);
	gpio_init(BUTTON0_ENABLE, GPIO_OUT);
	gpio_init(BUTTON0, GPIO_IN);
	gpio_init(VIBRATOR, GPIO_OUT);

	gpio_set(VCC33);
	gpio_set(BUTTON0_ENABLE);
	gpio_set(VIBRATOR);
	
	displayInit();
	displaySetBrightness(HIGH);
	
	puts("ili9341 TFT display filling map");
	ili9341_fill(&display, 0, 319, 0, 239, 0x0000);
	puts("ili9341 TFT display map filled");

	/* Fill square with blue */
	puts("Drawing blue rectangle");
	ili9341_fill(&display, 10, 59, 10, 109, 0x001F);
	xtimer_sleep(1);

	puts("Drawing green rectangle");
	ili9341_fill(&display, 10, 59, 10, 109, 0x07E0);
	xtimer_sleep(1);

	puts("Drawing red rectangle");
	ili9341_fill(&display, 10, 59, 10, 109, 0xf800);
	xtimer_sleep(1);

	ili9341_invert_on(&display);
	puts("ili9341 TFT display inverted");
	xtimer_sleep(1);
	ili9341_invert_off(&display);
	puts("ili9341 TFT display normal");

	/* Make the same square black again */
	ili9341_fill(&display, 10, 59, 10, 109, 0x0000);

	while(1)
	{
		
	}
	
	return 0;
}
