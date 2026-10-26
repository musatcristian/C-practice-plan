#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[5] = {42};
    volatile int *p = arr;
    printf("%d\n", p[5]);

    return 0;
}
