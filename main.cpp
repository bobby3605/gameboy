#include <iostream>
#include "main.hpp"
#include "instructions.hpp"

int main(int argc, char *argv[]) {
    isa ins;
    ins.function_table[0]();
    return 0;
}
