#include "main.h"

int main(void)
{
	xtimer_msleep(3000);	
	
	gpio_init(VCC33, GPIO_OUT);
	gpio_init(BUTTON0_ENABLE, GPIO_OUT);
	gpio_init(BUTTON0, GPIO_IN);
	gpio_init(VIBRATOR, GPIO_OUT);

	gpio_set(VCC33);
	gpio_set(BUTTON0_ENABLE);
	gpio_set(VIBRATOR);
	
	displayInit();
	displaySetBrightness(100);
	
	//graphicsInit();
	
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
		for(uint8_t c = 0; c < 3; c++)
		{
			for(uint8_t i = 0; i < 230; i++)
			{
				for(uint8_t j = 0; j < 230; j++)
				{
					displayWrite(j,i,c);
				}
			}
		}
		
		
		//graphicsRectangle(50,50,50,50,2);
		xtimer_msleep(1000);
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
