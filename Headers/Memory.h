//
// Created by jonat on 23/09/2024.
//

#ifndef MEMORY_H
#define MEMORY_H

#include <vector>

class Memory {
private:
    std::vector<int> memory;

public:
    Memory(int size);
    int getMemory(int address);
    void setMemory(int address, int value);
};



#endif //MEMORY_H
