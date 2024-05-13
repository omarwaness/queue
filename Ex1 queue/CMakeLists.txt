cmake_minimum_required(VERSION 3.26)
project(Ex1_queue C)

set(CMAKE_C_STANDARD 11)

add_executable(Ex1_queue main.c
        queue.c
        queue.h)
