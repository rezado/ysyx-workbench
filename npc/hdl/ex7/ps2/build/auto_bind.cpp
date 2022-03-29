#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top){
	nvboard_bind_pin(&top->ps2_clk, true, false, 1, PS2_CLK);
	nvboard_bind_pin(&top->ps2_data, true, false, 1, PS2_DAT);
	nvboard_bind_pin(&top->data0, false, true, 7, SEG0G, SEG0F, SEG0E, SEG0D, SEG0C, SEG0B, SEG0A);
	nvboard_bind_pin(&top->data1, false, true, 7, SEG1G, SEG1F, SEG1E, SEG1D, SEG1C, SEG1B, SEG1A);
	nvboard_bind_pin(&top->ascii0, false, true, 7, SEG3G, SEG3F, SEG3E, SEG3D, SEG3C, SEG3B, SEG3A);
	nvboard_bind_pin(&top->ascii1, false, true, 7, SEG4G, SEG4F, SEG4E, SEG4D, SEG4C, SEG4B, SEG4A);
	nvboard_bind_pin(&top->count0, false, true, 7, SEG6G, SEG6F, SEG6E, SEG6D, SEG6C, SEG6B, SEG6A);
	nvboard_bind_pin(&top->count1, false, true, 7, SEG7G, SEG7F, SEG7E, SEG7D, SEG7C, SEG7B, SEG7A);
	nvboard_bind_pin(&top->ready, false, true, 1, LD0);
	nvboard_bind_pin(&top->sampling, false, true, 1, LD1);
	nvboard_bind_pin(&top->overflow, false, true, 1, LD2);
	nvboard_bind_pin(&top->nextdata_n, false, true, 1, LD3);
}