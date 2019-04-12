cmake_minimum_required(VERSION 3.0)

project(myString LANGUAGES C)

set (SRC stringM.c stringM.h)

add_library(${PROJECT_NAME} "")
target_sources(${PROJECT_NAME} PRIVATE ${SRC})
target_link_libraries(${PROJECT_NAME} PRIVATE m)