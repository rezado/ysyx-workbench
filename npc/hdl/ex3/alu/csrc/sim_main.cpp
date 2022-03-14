#include <nvboard.h>
#include <Valu.h>

static TOP_NAME alu;
void nvboard_bind_all_pins(Valu* top);

int main() {
	nvboard_bind_all_pins(&alu);
	nvboard_init();

	while (1) {
		nvboard_update();
		alu.eval();
	}
	nvboard_quit();

	return 0;
}
