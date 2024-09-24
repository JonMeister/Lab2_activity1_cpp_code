cmake_minimum_required(VERSION 3.28.3)
project(Activity1_cpp_codes)

set(CMAKE_CXX_STANDARD 17)
add_executable(RunProgram main.cpp
        Implementations/Instruction.cpp
        Headers/Instruction.h
        Implementations/Memory.cpp
        Headers/Memory.h
        Implementations/Cpu.cpp
        Headers/Cpu.h)
