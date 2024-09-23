//
// Created by jonat on 21/09/2024.
//

#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <string>

class Instruction {
private:
    std::string instruction;
    int address;
    int value;

public:
    Instruction(std::string& instruction, int address,int value);

    std::string getInstruction();
    int getAddress();
    int getValue();
};



#endif //INSTRUCTION_H
