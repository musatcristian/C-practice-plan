#include "unity.h"
#include "../2_week/projects/exercises/utils.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_buffer_init_allocates_memory(void)
{
    Buffer buffer;

    int result = buffer_init(&buffer, 4);

    TEST_ASSERT_EQUAL_INT(0, result);
    TEST_ASSERT_NOT_NULL(buffer.data);
    TEST_ASSERT_EQUAL_UINT32(4, buffer.capacity);
    TEST_ASSERT_EQUAL_UINT32(0, buffer.count);

    buffer_destroy(&buffer);
}

void test_buffer_init_rejects_null_buffer(void)
{
    int result = buffer_init(NULL, 4);

    TEST_ASSERT_EQUAL_INT(-1, result);
}

void test_buffer_init_rejects_zero_capacity(void)
{
    Buffer buffer;

    int result = buffer_init(&buffer, 0);

    TEST_ASSERT_EQUAL_INT(-1, result);
}

void test_buffer_destroy_resets_buffer(void)
{
    Buffer buffer;

    TEST_ASSERT_EQUAL_INT(0, buffer_init(&buffer, 4));

    buffer_destroy(&buffer);

    TEST_ASSERT_NULL(buffer.data);
    TEST_ASSERT_EQUAL_UINT32(0, buffer.capacity);
    TEST_ASSERT_EQUAL_UINT32(0, buffer.count);
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_buffer_init_allocates_memory);
    RUN_TEST(test_buffer_init_rejects_null_buffer);
    RUN_TEST(test_buffer_init_rejects_zero_capacity);
    RUN_TEST(test_buffer_destroy_resets_buffer);

    return UNITY_END();
}