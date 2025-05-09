#include "unity.h"
#include "calculator.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_1(void) {
    TEST_ASSERT_EQUAL_INT(7, add(4, 3));
    TEST_ASSERT_EQUAL_INT(10, add(2, 8));
    TEST_ASSERT_EQUAL_INT(9, add(8, 1));
    TEST_ASSERT_EQUAL_INT(-1, add(-4, 3));
}