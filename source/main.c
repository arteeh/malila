#include <xtimer.h>
#include <board.h>
#include <cst816s.h>

#include <display.h>
#include <gui.h>

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
	
	guiInit();
	
	while(1)
	{
		
	}
	
	return 0;
}
