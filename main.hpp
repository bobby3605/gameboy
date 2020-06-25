#ifndef __MAIN_H_
#define __MAIN_H_

class CPU{
    public:
        CPU(){
            registers.af = 0;
            registers.bc = 0;
            registers.de = 0;
            registers.hl = 0;
            registers.sp = 0;
            registers.pc = 0;
            registers.flags = 0;
        };

        struct registers_s {
            struct {
                union {
                    struct {
                        unsigned char f;
                        unsigned char a;
                    };
                    unsigned short af;
                };
            };

            struct {
                union {
                    struct {
                        unsigned char c;
                        unsigned char b;
                    };
                    unsigned short bc;
                };
            };

            struct {
                union {
                    struct {
                        unsigned char e;
                        unsigned char d;
                    };
                    unsigned short de;
                };
            };

            struct {
                union {
                    struct {
                        unsigned char l;
                        unsigned char h;
                    };
                    unsigned short hl;
                };
            };
            unsigned short sp;
            unsigned short pc;
            unsigned char flags;
        };

        registers_s registers;
};
#endif
