#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
#include <inttypes.h>

int main(void)
{
    printf("%ld\n", INTMAX_MAX + 1);
    printf("%ld\n", INTMAX_MIN - 1);
    printf("%ld\n", INTMAX_MIN + INTMAX_MAX);
    printf("INTMAX_MAX = %" PRIdMAX "\n", INTMAX_MAX);

    return 0;
}
