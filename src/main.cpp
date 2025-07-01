#include "mem.h"

#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("RISC-V 32I Simulator\nCharlotte White\n");

    Memory memory;
    
    memory.memory_dump(0);

    memory.store_word(0x0, 0x12345678);

    memory.memory_dump(0);

    printf("Word: %02X\n", memory.load_word(0x0));

    return 0;
}