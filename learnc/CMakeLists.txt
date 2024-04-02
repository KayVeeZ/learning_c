cmake_minimum_required(VERSION 3.23)
project(learnc C)

set(CMAKE_C_STANDARD 99)

add_executable(learnc credit.c wordle.c cmake-build-debug/sel_sorting.c)
add_executable(main main.c)
add_executable(learns cmake-build-debug/bubble_sort.c)