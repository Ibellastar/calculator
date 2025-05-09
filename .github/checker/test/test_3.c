#include "unity.h"
#include "calculator.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_3(void) {
    TEST_ASSERT_EQUAL_INT(6, multiply(3, 2));
    TEST_ASSERT_EQUAL_INT(0, multiply(4, 0));
    TEST_ASSERT_EQUAL_INT(21, multiply(-7, -3));
    TEST_ASSERT_EQUAL_INT(-16, multiply(8, -2));
}