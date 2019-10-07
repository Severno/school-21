cmake_minimum_required(VERSION 3.14)
project(fillit_work C)

set(CMAKE_C_STANDARD 99)

file(GLOB SRC
        ../libft/*.c
        ../libft/libft.h
        ../fillit_final/*.c
        ../fillit_final/*.h)
message("${SRC}")
list(FILTER SRC EXCLUDE REGEX ".*main.c$")

add_executable(fillit_work ${SRC})
