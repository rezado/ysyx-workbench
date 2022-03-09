#include <nvboard.h>
#include <Vmux41b.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

static TOP_NAME mux41b;
void nvboard_bind_all_pins(Vmux41b* mux41b);


int main() {
	nvboard_bind_all_pins(&mux41b);

    nvboard_init();
	while (1) {
        nvboard_update();
        mux41b.eval();
	}
    nvboard_quit();
    
	return 0;
}
