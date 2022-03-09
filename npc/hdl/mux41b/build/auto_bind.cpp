#include <nvboard.h>
#include "Vmux41b.h"

void nvboard_bind_all_pins(Vmux41b* top){
	nvboard_bind_pin(&top->y, false, false, 2, SW1, SW0);
	nvboard_bind_pin(&top->x0, false, false, 2, SW3, SW2);
	nvboard_bind_pin(&top->x1, false, false, 2, SW5, SW4);
	nvboard_bind_pin(&top->x2, false, false, 2, SW7, SW6);
	nvboard_bind_pin(&top->x3, false, false, 2, SW9, SW8);
	nvboard_bind_pin(&top->f, false, true, 2, LD1, LD0);
}