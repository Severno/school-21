cmake_minimum_required(VERSION 3.14)
project(fillit_work C)

set(CMAKE_C_STANDARD 99)

file(GLOB SRC
        ../libft/*.c
        ../libft/libft.h
        ../gnl/get_next_line.c
        ../gnl/get_next_line.h
        *.c
        *.h)
message("${SRC}")
list(FILTER SRC EXCLUDE REGEX ".*main.c$")

add_executable(fillit_work main.c ${SRC} fillit.c map.c)