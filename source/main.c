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
		
		graphicscharacter(10,150,'_',small,2);
		graphicscharacter(40,150,'-',small,2);
		graphicscharacter(70,150,'+',small,2);
		
		graphicscharacter(10,200,'|',small,2);
		graphicscharacter(40,200,'`',small,2);
		graphicscharacter(70,200,'.',small,2);
		
		xtimer_msleep(3000);
	}
	
	return 0;
}

void *threaddisplayupdate(void *arg)
{
	(void) arg;

	while(true)
	{
		displayupdate();
		xtimer_msleep(1000);
	}
}
