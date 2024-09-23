//
// Created by jonat on 23/09/2024.
//

#include "../Headers/Cpu.h"
#include <fstream>
#include <sstream>
#include <iostream>

// Constructor
Cpu::Cpu(Memory& mem) : memory(mem), registerA(0) {}

void Cpu::loadProgram(const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string instruction;
        int address, value;
        if (iss >> instruction >> address >> value) {
            this->instructions.emplace_back(instruction, address, value);  // Usamos la clase Instruction
        }
    }
}

// Método para ejecutar las instrucciones cargadas
void Cpu::execute() {
    for (auto& instruction : instructions) {
        std::string op = instruction.getInstruction();
        int address = instruction.getAddress();
        int value = instruction.getValue();
        if (op == "SET") {
            memory.setMemory(address, value);  // Colocar valor en la dirección de memoria
        } else if (op == "LDR") {
            registerA = memory.getMemory(address);  // Cargar desde la memoria al registro A
        } else if (op == "STR") {
            memory.setMemory(address, registerA);  // Almacenar el valor del registro A en la dirección
        } else if (op == "ADD") {
            registerA += memory.getMemory(address);  // Sumar el valor de la memoria al registro A
        } else if (op == "SHOW") {
            std::cout <<memory.getMemory(address)<<std::endl;  // Restar el valor de la memoria al registro A
        } else {
            std::cerr << "Instrucción desconocida: " << op << std::endl;
        }
    }
}
int Cpu::getRegisterA() {return registerA;}