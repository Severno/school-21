cmake_minimum_required(VERSION 3.14)
project(gnl C)

set(CMAKE_C_STANDARD 99)

file(GLOB SRC
        ../libft/*.c
        ../libft/libft.h
        get_next_line.c
        get_next_line.h)
message("${SRC}")
list(FILTER SRC EXCLUDE REGEX ".*main.c$")

add_executable(gnl main.c ${SRC})