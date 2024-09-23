//
// Created by jonat on 23/09/2024.
//

#include "../Headers/Memory.h"

Memory::Memory(int size) {
    this->memory=std::vector<int>(size,0);
}
int Memory::getMemory(int address) {return memory[address];}
void Memory::setMemory(int address, int value) {memory[address]=value;}
