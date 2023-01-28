#include "main.h"

int main(void)
{

	puts("Hello World!");

#ifdef ON_PINETIME
	puts("Running on the Pinetime");

	// RIOT's board_init() already does all of this. Why the **** do we have to do it again?
	gpio_init(VCC33, GPIO_OUT);
	gpio_init(BUTTON0_ENABLE, GPIO_OUT);
	gpio_init(BUTTON0, GPIO_IN);
	gpio_init(VIBRATOR, GPIO_OUT);

	gpio_set(VCC33);
	gpio_set(BUTTON0_ENABLE);
	gpio_set(VIBRATOR);
#endif
	
#ifdef ON_NATIVE
	puts("Running on native");
#endif

	graphicsInit();
	graphicsSetBrightness(100);
	
	while(true)
	{
		xtimer_msleep(3000);
	}
	
	return 0;
}