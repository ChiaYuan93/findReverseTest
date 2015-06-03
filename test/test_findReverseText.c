#include "unity.h"
#include "findReverseText.h"

void setUp(void){}

void tearDown(void){}

void test_findReverseText_given_ALADIN_find_A_should_return_2(void)
{
 TEST_ASSERT_EQUAL(2,findReverseText("ALADIN", "A"));
}
void test_findReverseText_given_ALADIN_find_LA_should_return_2(void)
{
 TEST_ASSERT_EQUAL(1,findReverseText("ALADIN", "LA"));
}
void test_findReverseText_given_ALADINDIN_find_DIN_should_return_2(void)
{
 TEST_ASSERT_EQUAL(6,findReverseText("ALADINDIN", "DIN"));
}
void test_findReverseText_given_HELLO_find_D_should_return_minus_2()
{
    TEST_ASSERT_EQUAL(-2, findReverseText("HELLO", "D"));
}
 
void test_findReverseText_given_WORLD_find_RL_should_return_2()
{
    TEST_ASSERT_EQUAL(2, findReverseText("WORLD", "RL"));
}
 
void test_findReverseText_given_PROGRAMMING_find_CD_should_return_minus_2()
{
    TEST_ASSERT_EQUAL(-2, findReverseText("PROGRAMMING", "CD"));
}
 
void test_findReverseText_given_ABCDEFG_find_EF_should_return_4()
{
    TEST_ASSERT_EQUAL(4, findReverseText("ABCDEFG", "EF"));
}
void test_findReverseText_given_empty_string_find_DI_should_return_minus_2()
{
    TEST_ASSERT_EQUAL(-2, findReverseText("", "DI"));
}
 
void test_findReverseText_given_DI_find_empty_string_should_return_minus_2()
{
    TEST_ASSERT_EQUAL(-2, findReverseText("DI", ""));
}
 