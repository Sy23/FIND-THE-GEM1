#include "DisplayBorder.h"
#include "unity.h"


/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

int test_read()
{
    // Can ommi the below intialization as it is done at the declaration time


}
void test_DisplayBorder()
{

}

int test_setxy()
{


}
/*int  test_search()
{

}*/

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_DisplayBorder);
    RUN_TEST(test_setxy);

    /* Close the Unity Test Framework */
    return UNITY_END();
}
