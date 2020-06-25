void lda();
void ldb();

#define numIns 2

class isa {
    public:
        typedef void (* functionP)();
        functionP function_table[numIns];
        isa(){
            for(int i = 0; i < numIns; i++){
                function_table[instructionList[i].opcode] = instructionList[i].f;
            }
        }

    private:
        struct instruction {
            unsigned char opcode;
            functionP f;
        };

        struct instruction instructionList [numIns] = {
        {0x00,lda}
        ,{0x01,ldb}
    };

};
