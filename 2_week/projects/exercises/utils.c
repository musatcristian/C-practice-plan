#include "utils.h"

#include <stdlib.h>
#include <stdint.h>

int buffer_init(Buffer *buffer, size_t initial_capacity)
{
    if (buffer == NULL || initial_capacity == 0)
        return -1;

    if (initial_capacity > SIZE_MAX / sizeof(*buffer->data))
        return -1;

    buffer->data = malloc(initial_capacity * sizeof(*buffer->data));

    if (buffer->data == NULL)
        return -1;

    buffer->capacity = initial_capacity;
    buffer->count = 0;

    return 0;
}

void buffer_destroy(Buffer *buffer)
{
    if (buffer == NULL)
        return;

    free(buffer->data);

    buffer->data = NULL;
    buffer->capacity = 0;
    buffer->count = 0;
}