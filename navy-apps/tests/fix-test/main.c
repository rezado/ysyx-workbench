#include <stdio.h>
#include <fixedptc.h>

int main(void) {
    fixedpt a = fixedpt_rconst(1.2);
    fixedpt b = fixedpt_fromint(10);
    fixedpt d = fixedpt_rconst(-1.2);
    printf("floor 1.2:%d\n", fixedpt_toint(fixedpt_floor(a)));
    printf("floor -1.2:%d\n", fixedpt_toint(fixedpt_floor(d)));
    printf("ceil 1.2:%d\n", fixedpt_toint(fixedpt_ceil(a)));
    printf("ceil -1.2:%d\n", fixedpt_toint(fixedpt_ceil(d)));
    int c = 0;
    if (b > fixedpt_rconst(7.9)) {
        printf("10 > 7.9\n");
        c = fixedpt_toint(fixedpt_div(fixedpt_mul(a + FIXEDPT_ONE, b), fixedpt_rconst(2.3)));
    }
    printf("c:%d\n", c);

    return 0;
}