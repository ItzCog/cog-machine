cmake_minimum_required(VERSION 3.24)
project(CogMachine)

set(CMAKE_CXX_STANDARD 17)

add_executable(CogMachine main.cpp cog.cpp cog.h machine.cpp machine.h front_end.cpp example.cpp example.h front_end.h)
