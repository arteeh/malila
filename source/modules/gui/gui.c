#include "gui.h"

lv_obj_t * screenHome;
lv_obj_t * screenHomeTime;

void guiInit(void)
{
	lvgl_init(&screen);
	
	screenHome	= lv_obj_create(NULL,NULL);
	screenHomeTime	= lv_label_create(screenHome,NULL);
	
	// screenHome
	lv_obj_set_width(screenHome,240);
	lv_obj_set_height(screenHome,240);
	lv_obj_set_pos(screenHome,0,0);
	
	// screenHomeTime
	lv_obj_set_pos(screenHomeTime,95,95);
	lv_obj_set_size(screenHomeTime,50,50);
	lv_label_set_text(screenHomeTime,"Party\ntime");
}
