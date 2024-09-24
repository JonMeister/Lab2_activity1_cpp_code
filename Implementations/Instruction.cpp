//
// Created by jonat on 21/09/2024.
//

#include "../Headers/Instruction.h"

Instruction::Instruction(std::string &instruction, int address, int value) {
    this->instruction = instruction;
    this->address = address;
    this->value = value;
}
std::string Instruction::getInstruction() {return instruction;}
int Instruction::getAddress() {return address;}
int Instruction::getValue() {return value;}


