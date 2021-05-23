#include "main.h"

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
	displaySetBrightness(100);
	
	graphicsInit();
	
	thread_create(
		threadDisplayUpdateStack,
		sizeof(threadDisplayUpdateStack),
		THREAD_PRIORITY_MAIN - 1,
		THREAD_CREATE_STACKTEST,
		threadDisplayUpdate,
		NULL,
		NULL
	);
	
	while(1)
	{
		
	}
	
	return 0;
}

void *threadDisplayUpdate(void *arg)
{
	(void) arg;

	while(true)
	{
		displayUpdate();
		xtimer_msleep(16);
	}
}
