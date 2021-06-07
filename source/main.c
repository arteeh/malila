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
	
	displayinit();
	displaysetbrightness(100);
	
	//graphicsinit();


	while(1)
	{
		//displaywriterectangle(50,50,50,50,0xf0);
		
		xtimer_msleep(1000);
	}
	
	return 0;
}

