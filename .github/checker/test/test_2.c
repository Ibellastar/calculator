#include "unity.h"
#include "calculator.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_2(void) {
    TEST_ASSERT_EQUAL_INT(4, subtract(8, 4));
    TEST_ASSERT_EQUAL_INT(8, subtract(11, 3));
    TEST_ASSERT_EQUAL_INT(-4, subtract(4, 8));
    TEST_ASSERT_EQUAL_INT(1, subtract(-2, -3));
}