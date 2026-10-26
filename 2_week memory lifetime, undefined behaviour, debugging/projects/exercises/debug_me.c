
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

#define INITIAL_SIZE 4

int main(void)
{
    size_t capacity = INITIAL_SIZE;
    size_t count = 0;

    int *data = malloc(capacity * sizeof(*data));
    if (data == NULL)
        return 1;
    size_t max_size = SIZE_MAX / sizeof(*data);
    puts("Enter integers. Enter -1 to finish.");

    int input;

    while (scanf("%d", &input) == 1 && input != -1 && capacity < (SIZE_MAX / 2))
    {
        if (count == capacity)
        {
            size_t new_capacity = capacity * 2;
            if (new_capacity > max_size)
            {
                free(data);
                return 1;
            }
            int *new_data = realloc(data, new_capacity * sizeof(*new_data));
            if (new_data == NULL)
            {
                free(data);
                return 1;
            }
            data = new_data;
            capacity = new_capacity;
        }
        data[count] = input;
        count++;
    }

    printf("\nStored %zu integers:\n", count);

    for (size_t i = 0; i < count; i++)
        printf("%d ", data[i]);

    putchar('\n');
    if (count > max_size)
    {
        free(data);
        return 1;
    }
    size_t bytes = count * sizeof(*data);
    printf("Buffer size in bytes: %zu\n", bytes);
    free(data);

    return 0;
}
