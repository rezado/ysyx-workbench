#include <stdio.h>
#include <assert.h>
#include <sys/time.h>

int main() {
    struct timeval tv;
    int ret = -1, usec = 0;
    while (1) {
        ret = gettimeofday(&tv, NULL);
        assert(ret == 0);
        if (tv.tv_usec - usec >= 500000) {
            printf("0.5秒过去了 有没有好好做PA呢\n");
            usec = tv.tv_usec;
        }
    }

    return 0;
}