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

void testEqual(void){
    char s1[]="hello";
    char s3[]="hello";
    CU_ASSERT_EQUAL(compareString(s1,s3), 0);
    CU_ASSERT_EQUAL(compareString("hi","hi"), 0);
    CU_ASSERT_EQUAL(compareString("maryam","maryam"), 0);
}

void testNotEqual(void){
    char s1[]="hello";
    char s3[]="hello ";
    CU_ASSERT_EQUAL(compareString(s1,s3), -1);
    CU_ASSERT_EQUAL(compareString("hi","hi _ded"), -1);
    CU_ASSERT_EQUAL(compareString("maryam","maryam here"), -1);
}

void testStringIsPolyndrome(void){
    char s1[]="anna";
    char s3[]="makaakam";
    CU_ASSERT_EQUAL(polyndrome(s1), 0);
    CU_ASSERT_EQUAL(polyndrome(s3), 0);
    CU_ASSERT_EQUAL(polyndrome("abccba"), 0);
}


void testStringIsNotPolyndrome(void){
    char s1[]="anrgerna";
    char s3[]="makaakcefecam";
    CU_ASSERT_EQUAL(polyndrome(s1), -1);
    CU_ASSERT_EQUAL(polyndrome(s3), -1);
    CU_ASSERT_EQUAL(polyndrome("rfjeec"), -1);
}



int main(int argc, char const *argv[])
{
    int inititlize=CU_initialize_registry();
    
    CU_pSuite suite=CU_add_suite("length", NULL, NULL );
    CU_add_test(suite, "length1", testStringLength );

    CU_pSuite suite2=CU_add_suite("compare", NULL, NULL );
    CU_add_test(suite2, "testEqual", testEqual );
    CU_add_test(suite2, "NotEqual", testNotEqual);

    CU_pSuite suite3=CU_add_suite("polyndrome", NULL, NULL );
    CU_add_test(suite3, "isPol", testStringIsPolyndrome );
    CU_add_test(suite3, "notPol", testStringIsNotPolyndrome );



    CU_basic_run_tests();
    CU_basic_show_failures(CU_get_failure_list());
    
    return CU_get_number_of_failures();
}
