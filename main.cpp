#include <iostream>
#include "instructions.hpp"

#define runIns(opcode) (ins.function_table[opcode])(cpu)

int main(int argc, char *argv[]) {
    CPU cpu;
    ISA ins;
    runIns(0x00);
    return 0;
}
