cmake_minimum_required(VERSION 3.30)
project(ParityArray C)

set(CMAKE_C_STANDARD 99)

add_executable(ParityArray main.c
        parityarray.c
        parityarray.h)

# add compiler arguments
target_compile_options(ParityArray PRIVATE -Wall -Wextra -Wpedantic -Werror)