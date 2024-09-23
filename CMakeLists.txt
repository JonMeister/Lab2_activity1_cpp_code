cmake_minimum_required(VERSION 3.29)
project(Activity1_cpp_codes)

set(CMAKE_CXX_STANDARD 26)
add_executable(Activity1_cpp_codes main.cpp
        Implementations/Instruction.cpp
        Headers/Instruction.h
        Implementations/Memory.cpp
        Headers/Memory.h
        Implementations/Cpu.cpp
        Headers/Cpu.h)
