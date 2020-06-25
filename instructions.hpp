#ifndef __INSTRUCTIONS_H_
#define __INSTRUCTIONS_H_

#include "main.hpp"
#include "iostream"
#include "stdio.h"

void lda(CPU);
void ldb(CPU);

#define numIns 2

class ISA {
    public:
        typedef void (* functionP)(CPU);
        functionP function_table[numIns];
        // Build a table of function pointers that can be indexed by their respective opcodes
        ISA(){
            for(int i = 0; i < numIns; i++){
                function_table[instructionList[i].opcode] = instructionList[i].func;
            }
        }
    private:
        struct instruction {
            unsigned char opcode;
            functionP func;
        };
        // Opcodes and functions for each instruction
        struct instruction instructionList [numIns] = {
        {0x00,lda}
        ,{0x01,ldb}
    };

};
#endif
