#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top){
	nvboard_bind_pin(&top->x, false, false, 8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin(&top->y, false, true, 4, LD4, LD2, LD1, LD0);
	nvboard_bind_pin(&top->h, false, true, 7, SEG0G, SEG0F, SEG0E, SEG0D, SEG0C, SEG0B, SEG0A);
}