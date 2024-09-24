//
// Created by jonat on 23/09/2024.
//

#include "../Headers/Cpu.h"
#include <fstream>
#include <sstream>
#include <iostream>

Cpu::Cpu(Memory& mem) : memory(mem), registerA(0) {}

void Cpu::loadProgram(const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    std::cout<<"Programa que se está leyendo: "<<std::endl;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string instruction;
        int address, value;
        if (iss >> instruction >> address >> value) {
            this->instructions.emplace_back(instruction, address, value);
            std::cout << instruction << " " << address << " " << value << std::endl;
        }
    }
}

void Cpu::execute() {
    for (auto& instruction : instructions) {
        std::string op = instruction.getInstruction();
        int address = instruction.getAddress();
        int value = instruction.getValue();
        if (op == "SET") {
            memory.setMemory(address, value);
        } else if (op == "LDR") {
            registerA = memory.getMemory(address);
        } else if (op == "STR") {
            memory.setMemory(address, registerA);
        } else if (op == "ADD") {
            registerA += memory.getMemory(address);
        } else if (op == "SHOW") {
            std::cout <<"Mostrando resultado en el espacio "<<address<<" de la memoria: "<<memory.getMemory(address)<<std::endl;
        } else {
            std::cerr << "Instrucción desconocida: " << op << std::endl;
        }
    }
}
int Cpu::getRegisterA() {return registerA;}
