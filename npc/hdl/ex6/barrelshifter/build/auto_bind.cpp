#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top){
	nvboard_bind_pin(&top->clk, false, false, 1, BTNC);
	nvboard_bind_pin(&top->rst, false, false, 1, BTNU);
	nvboard_bind_pin(&top->out, false, true, 8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
}