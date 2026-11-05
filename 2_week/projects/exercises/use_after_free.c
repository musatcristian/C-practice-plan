
#include <stdlib.h>

int main(void)
{
    int *arr = malloc(sizeof(int) * 10);
    if (arr == NULL)
        return 1;

    free(arr);

    volatile int *p = arr;
    p[1] = 42;

    return 0;
}
