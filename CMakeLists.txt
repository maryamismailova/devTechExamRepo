cmake_minimum_required(VERSION 3.0)

project (sieve LANGUAGES C)

set(PROJECT_TEST testLib)

add_subdirectory(myString)

add_executable(${PROJECT_TEST} "")
target_sources(${PROJECT_TEST} PUBLIC test.c)
target_link_libraries(${PROJECT_TEST} PUBLIC myString cunit)
target_include_directories(${PROJECT_TEST} PUBLIC myString)

enable_testing()
add_test(LibTesting ${PROJECT_TEST})
