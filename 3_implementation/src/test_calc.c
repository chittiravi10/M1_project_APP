#include "calculator.h"
#include "unity.h"

void setUp()
{

}
void tearDown()
{

}
void test_addition(void)
{
    TEST_ASSERT_EQUAL_INT(3,addition(1,2));
    TEST_ASSERT_EQUAL_INT(9,addition(6,3));
}
void test_subraction(void)
{
    TEST_ASSERT_EQUAL_INT(1,subraction(3,2));
    TEST_ASSERT_EQUAL_INT(-1,subraction(1,2));
}
void test_multiplication(void)
{
    TEST_ASSERT_EQUAL_INT(6,multiplication(3,2));
    TEST_ASSERT_EQUAL_INT(712,multiplication(89,8));
}
void test_division(void)
{
    TEST_ASSERT_EQUAL_FLOAT(9,division(18,2));
    TEST_ASSERT_EQUAL_FLOAT_MESSAGE(0,division(18,0),"INVALID");
}
int main(void)
{
    UNITY_BEGIN();


    RUN_TEST(test_addition);
    RUN_TEST(test_subraction);
    RUN_TEST(test_multiplication);
    RUN_TEST(test_division);
    
    
    return UNITY_END();

}