#include <stddef.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef enum
{
    OFF,
    ON
} Status;

typedef struct
{
    uint8_t ID;
    Status status;
    double reading;
} Sensor;

void read_temp(Sensor *);
void initialize_arr(uint8_t);

int main(void)
{
    Sensor s = {.ID = 1, .reading = 1.1, .status = OFF};

    printf("%zu\n", sizeof(s));
    printf("%ld\n", offsetof(Sensor, reading));
    printf("Before: %f\n", s.reading);
    read_temp(&s);
    printf("After: %f\n", s.reading);
    printf("ID: %d, Reading: %.2f, Status: %d\n",
           s.ID, s.reading, s.status);

    initialize_arr(10);
    return 0;
}

void read_temp(Sensor *t)
{
    t->status = ON;
    t->reading = 40;
}

void initialize_arr(uint8_t len)
{
    int *arr = NULL;
    if ((arr = calloc(len, sizeof(int))) != NULL)
    {
        for (uint8_t i = 0; i < len; i++)
        {
            arr[i] = i * 5;
        }
    }

    int *new_arr = NULL;

    if ((new_arr = realloc(arr, sizeof(*new_arr) * len * 2)) != NULL)
    {
        arr = new_arr;
    }

    for (uint8_t i = 0; i < len; i++)
    {
        printf("%d\n", arr[i]);
    }

    free(arr);
}
