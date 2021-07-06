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
		
		uint8_t x;
		uint8_t y;
		char c;
		
		x = 0;
		y = 0;
		c = ' ';
		
		while(c < '~')
		{
			x = graphicscharacter(x,y,c,small,3);
			if(x == 0) y += 24;
			c++;
		}
		
		x = 0;
		y += 24;
		c = '0';
		
		while(c < ':')
		{
			x = graphicscharacter(x,y,c,big,3);
			//if(x == 0) y += 64;
			c++;
		}
		
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
		xtimer_msleep(3000);
	}
}
