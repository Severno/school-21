cmake_minimum_required(VERSION 3.14)
project(ft_printf_final C)

set(CMAKE_C_STANDARD 99)
file(GLOB SRC libft/*.c)

add_executable(ft_printf_final srcs/ft_printf.c ${SRC}
        srcs/flag_align.c
        srcs/flag_char.c
        srcs/flag_double.c
        srcs/flag_int.c
        srcs/flag_precision.c
        srcs/parse_flags.c)