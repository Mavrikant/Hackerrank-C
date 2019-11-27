cmake_minimum_required(VERSION 3.15)
project(Hackerrank_C C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Hackerrank_C   recursion-in-c.c)
target_link_libraries(Hackerrank_C m)