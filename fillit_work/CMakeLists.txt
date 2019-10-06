cmake_minimum_required(VERSION 3.14)
project(fillit_work C)

set(CMAKE_C_STANDARD 99)

file(GLOB SRC
        ../libft/*.c
        ../libft/libft.h
        *.c
        *.h)
message("${SRC}")
list(FILTER SRC EXCLUDE REGEX ".*main.c$")

add_executable(fillit_work ${SRC} fillit.c tetramino.c read.c validation.c solver.c map.c)
