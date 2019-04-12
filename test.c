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

}

int main(int argc, char const *argv[])
{
    int inititlize=CU_initialize_registry();
    CU_pSuite suite=CU_add_suite("stringLib", NULL, NULL );
    CU_add_test(suite, "length", testStringLength );

    CU_basic_run_tests();
    CU_basic_show_failures(CU_get_failure_list());
    
    return CU_get_number_of_failures();
}
