
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include "utils.h"

#define INITIAL_SIZE 4

int main(void)
{
    Buffer buff;
    int res = buffer_init(&buff, INITIAL_SIZE);

    if (res == -1)
    {
        return EXIT_FAILURE;
    }
    // size_t capacity = INITIAL_SIZE;
    // size_t count = 0;

    // int *data = malloc(capacity * sizeof(*data));
    // if (data == NULL)
    //     return 1;
    size_t max_size = SIZE_MAX / sizeof(*buff.data);
    puts("Enter integers. Enter -1 to finish.");

    int input;

    while (scanf("%d", &input) == 1 && input != -1 && buff.capacity < (SIZE_MAX / 2))
    {
        if (buff.count == buff.capacity)
        {
            size_t new_capacity = buff.capacity * 2;
            if (new_capacity > max_size)
            {
                free(buff.data);
                return 1;
            }
            int *new_data = realloc(buff.data, new_capacity * sizeof(*new_data));
            if (new_data == NULL)
            {
                free(buff.data);
                return 1;
            }
            buff.data = new_data;
            buff.capacity = new_capacity;
        }
        buff.data[buff.count] = input;
        buff.count++;
    }

    printf("\nStored %zu integers:\n", buff.count);

    for (size_t i = 0; i < buff.count; i++)
        printf("%d ", buff.data[i]);

    putchar('\n');
    if (buff.count > max_size)
    {
        free(buff.data);
        return 1;
    }
    size_t bytes = buff.count * sizeof(*buff.data);
    printf("Buffer size in bytes: %zu\n", bytes);
    free(buff.data);

    return 0;
}
