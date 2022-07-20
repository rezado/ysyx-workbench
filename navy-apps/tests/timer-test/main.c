#include <stdio.h>
#include <NDL.h>

int main() {
    NDL_Init(0);
    int flag = 0, ret;
    while (1) {
        ret = NDL_GetTicks();
        // printf("%d\n", ret);
        if (flag && ret >= 500000) {
            printf("0.5秒过去了 有没有好好做PA呢\n");
            flag = 0;
        }
        if (!flag && ret < 500000) flag = 1;
    }

    return 0;
}