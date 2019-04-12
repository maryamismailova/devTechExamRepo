#include "stringM.h"
#include <stdio.h>
#include <stdlib.h>
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include <string.h>
#include <stdlib.h>

void testStringLength(void){
    char test1[]="hello";
    char test2[]="nothing here";
    char test3[]="";
    CU_ASSERT_EQUAL(length(test1), strlen(test1));
    CU_ASSERT_EQUAL(length(test2), strlen(test2));
    CU_ASSERT_EQUAL(length(test3), strlen(test3));
    // CU_ASSERT_EQUAL(length(test1), 10);
}

void testStringCompare(void){
    char s1="hello";
    char s2="hello hi";
    char s3="hello";
    CU_ASSERT_EQUAL(compareString(s1,s2), -1);
    CU_ASSERT_EQUAL(compareString(s1,s3), 0);
    CU_ASSERT_EQUAL(compareString(s2,s3), -1);

}

int main(int argc, char const *argv[])
{
    int inititlize=CU_initialize_registry();
    CU_pSuite suite=CU_add_suite("length", NULL, NULL );
    CU_add_test(suite, "length1", testStringLength );

    CU_pSuite suite2=CU_add_suite("compare", NULL, NULL );
    CU_add_test(suite2, "cmp1", testStringCompare );


    CU_basic_run_tests();
    CU_basic_show_failures(CU_get_failure_list());
    
    return CU_get_number_of_failures();
}
