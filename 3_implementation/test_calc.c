#include "calculator.h"
#include "unity.h"
#include "calculator.c"
void setup()
{

}
void teardown()
{

}
void test_addition(void)
{
    TEST_ASSERT_EQUAL_FLOAT(3,addition(1,2));

}
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_addition);
    return UNITY_END();

}