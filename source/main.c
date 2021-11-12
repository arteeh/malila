#include "main.h"

int main(void)
{
#if BOARD == pinetime && BOARD != native
	gpio_init(VCC33, GPIO_OUT);
	gpio_init(BUTTON0_ENABLE, GPIO_OUT);
	gpio_init(BUTTON0, GPIO_IN);
	gpio_init(VIBRATOR, GPIO_OUT);
	gpio_set(VCC33);
	gpio_set(BUTTON0_ENABLE);
	gpio_set(VIBRATOR);
#endif

	while(true)
	{
		xtimer_msleep(3000);
	}
	
	return 0;
}

