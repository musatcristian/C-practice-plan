#ifndef UTILS_H
#define UTILS_H

#include <stddef.h>

typedef struct
{
    int *data;
    size_t capacity;
    size_t count;
} Buffer;

int buffer_init(Buffer *, size_t);
void buffer_destroy(Buffer *);

#endif