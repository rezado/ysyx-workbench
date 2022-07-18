#include <stdio.h>
#include <assert.h>
#include "NDL.h"

int main() {
    int usec = 0, ret;
    while (1) {
        ret = NDL_GetTicks();
        if (ret - usec >= 500000) {
            printf("0.5秒过去了 有没有好好做PA呢\n");
            usec = ret;
        }
    }

    return 0;
}