#include <iostream>
#include "./Headers/Cpu.h"
#include "Memory.h"

int main() {
    const int memorySize = 100;
    Memory mem(memorySize);
    Cpu cpu(mem);

    std::string filename = "./program.txt";
    cpu.loadProgram(filename);

    cpu.execute();
    return 0;
}