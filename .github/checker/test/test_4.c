#include "unity.h"
#include "calculator.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_4(void) {
    TEST_ASSERT_EQUAL_INT(0, divide(5, 0));
    TEST_ASSERT_EQUAL_INT(-5, divide(15, -3));
    TEST_ASSERT_EQUAL_INT(10, divide(20, 2));
    TEST_ASSERT_EQUAL_INT(3.33333333333, divide(-10, -3));
}