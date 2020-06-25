#ifndef __INSTRUCTIONS_H_
#define __INSTRUCTIONS_H_

void lda();
void ldb();

class isa {
    public:
        typedef void (* functionP)();
        functionP function_table[2]; // 2 because sizeof(instructionList) doesn't work
        isa(){
            for(int i = 0; i < sizeof(instructionList); i++){
                function_table[instructionList[i].opcode] = instructionList[i].f;
            }
        }

    private:
        struct instruction {
            unsigned char opcode;
            functionP f;
        };

        static constexpr struct instruction instructionList [] = {
        {0x00,lda}
        ,{0x01,ldb}
    };

};

#endif // __INSTRUCTIONS_H_
