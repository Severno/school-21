cmake_minimum_required(VERSION 3.14)
project(libft)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Debug)
include_directories(Release)

file(GLOB SRC_RELEASE
        *.c
        libft.h)
list(REMOVE_ITEM SRC_RELEASE "main.c")
file(GLOB SRC_DEBUG
        *.c
        libft.h)
file(GLOB OTHER_FILES
        author
        Makefile)

file(COPY ${SRC_DEBUG}  ${OTHER_FILES} DESTINATION Debug)
file(COPY ${SRC_RELEASE} ${OTHER_FILES} DESTINATION Release)

add_executable(libft main.c ${SRC_DEBUG})
