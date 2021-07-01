#include "main.h"

int main(void)
{
#if BOARD == native
#elif BOARD == pinetime
	gpio_init(VCC33, GPIO_OUT);
	gpio_init(BUTTON0_ENABLE, GPIO_OUT);
	gpio_init(BUTTON0, GPIO_IN);
	gpio_init(VIBRATOR, GPIO_OUT);
	gpio_set(VCC33);
	gpio_set(BUTTON0_ENABLE);
	gpio_set(VIBRATOR);
#endif
	
	displayinit();
	displaybrightness(100);
	
	graphicsinit();
	
	thread_create(
		threaddisplayupdatestack,
		sizeof(threaddisplayupdatestack),
		THREAD_PRIORITY_MAIN - 1,
		THREAD_CREATE_STACKTEST,
		threaddisplayupdate,
		NULL,
		NULL
	);
	
	while(true)
	{
		graphicsclear();
		
		for(uint8_t c = 0 ; c <= 3 ; c++)
		{
			for(uint8_t y = 0 ; y < 240 ; y++)
			{
				for(uint8_t x = 0 ; x < 240 ; x++)
				{
					displaywrite(x,y,c);
				}
			}
			xtimer_msleep(2000);
		}
		xtimer_msleep(5000);
	}
	
	return 0;
}

void *threaddisplayupdate(void *arg)
{
	(void) arg;

	while(true)
	{
		displayupdate();
		xtimer_msleep(400);
	}
}
