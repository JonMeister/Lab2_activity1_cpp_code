//
// Created by jonat on 23/09/2024.
//

#ifndef CPU_H
#define CPU_H

#include <vector>
#include <string>

#include "Instruction.h"
#include "Memory.h"

class Cpu {
private:
    Memory& memory;
    int registerA;
    std::vector<Instruction> instructions;

public:
    Cpu(Memory& mem);

    void loadProgram(const std::string& filename);

    void execute();
    int getRegisterA();
};


#endif //CPU_H
