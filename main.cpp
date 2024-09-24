#include <iostream>
#include "./Headers/Cpu.h"


int main() {
    const int memorySize = 100;
    Memory mem(memorySize);
    Cpu cpu(mem);
    std::string fileName;
    std::cout << "Ingresa el nombre del programa a ejecutar: ";
    std::cin >> fileName;
    
    std::string filePath = "./"+fileName;
    cpu.loadProgram(filePath);
    
    cpu.execute();
    return 0;
}
