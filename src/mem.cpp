#include "mem.h"
#include <stdio.h>
#include <cstring>

/* 
Data is stored in little endian format
*/

Memory::Memory() {
    memset(mem, 0, MEMORY_SIZE);
}

Memory::~Memory() {

}

/* Load a word from addr */
uint32_t Memory::load_word(uint32_t addr) {
    return mem[addr] | (mem[addr+1] << 8) | (mem[addr+2] << 16) | (mem[addr+3] << 24);
}

/* Store a word, val to addr */
void Memory::store_word(uint32_t addr, uint32_t val) {
    mem[addr] = val & 0xFF;
    mem[addr+1] = (val >> 8) & 0xFF;
    mem[addr+2] = (val >> 16) & 0xFF;
    mem[addr+3] = (val >> 24) & 0xFF;
}

/* Memory dump beginning at addr */
void Memory::memory_dump(uint32_t addr) {
    for (unsigned int i = addr; i < MEMORY_SIZE; i++) {
        if (i % 8 == 0) { printf("\n"); }
        printf("%02X ", mem[i]);
    }
    printf("\n");
}