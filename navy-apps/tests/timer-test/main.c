#include <stdio.h>
#include <NDL.h>

int main() {
    NDL_Init(0);
    int ret, last = 0, i = 0;
    while (1) {
        ret = NDL_GetTicks();
        // printf("%d\n", ret);
        if (ret - last >= 500) {
            printf("%d:0.5秒过去了 有没有好好做PA呢\n", i++);
            last = ret;
        }
    }

    return 0;
}