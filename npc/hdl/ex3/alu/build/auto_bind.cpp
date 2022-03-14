#include <nvboard.h>
#include "Valu.h"

void nvboard_bind_all_pins(Valu* top){
	nvboard_bind_pin(&top->A, false, false, 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin(&top->B, false, false, 4, SW7, SW6, SW5, SW4);
	nvboard_bind_pin(&top->op, false, false, 4, SW11, SW10, SW9, SW8);
	nvboard_bind_pin(&top->result, false, true, 4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin(&top->overflow, false, true, 1, LD4);
	nvboard_bind_pin(&top->carry, false, true, 1, LD5);
	nvboard_bind_pin(&top->zero, false, true, 1, LD6);
}