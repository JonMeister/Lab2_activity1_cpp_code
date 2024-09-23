#include <iostream>
#include "./Headers/Cpu.h"
#include "Memory.h"

int main() {
    const int memorySize = 100; // Tamaño de la memoria
    Memory mem(memorySize);      // Crear un objeto de memoria
    Cpu cpu(mem);                // Crear un objeto de CPU que utiliza esa memoria

    // Cargar un programa desde un archivo de texto
    std::string filename = "./program.txt"; // Asegúrate de que este archivo existe
    cpu.loadProgram(filename);

    // Ejecutar las instrucciones cargadas
    cpu.execute();
    return 0;
}