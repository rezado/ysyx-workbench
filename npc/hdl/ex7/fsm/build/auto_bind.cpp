#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top){
	nvboard_bind_pin(&top->clk, false, false, 1, BTNC);
	nvboard_bind_pin(&top->in, false, false, 1, SW0);
	nvboard_bind_pin(&top->reset, false, false, 1, SW1);
	nvboard_bind_pin(&top->out, false, true, 1, LD0);
}