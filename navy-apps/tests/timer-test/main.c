#include <stdio.h>
#include <NDL.h>

int main() {
    NDL_Init(0);
    int usec = 0, ret;
    while (1) {
        ret = NDL_GetTicks();
        printf("%d\n", ret);
        if (ret - usec >= 500000) {
            printf("0.5秒过去了 有没有好好做PA呢\n");
            usec = ret;
        }
    }

    return 0;
}