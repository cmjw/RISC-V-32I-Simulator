#include <stdint.h>

#ifndef MEMORY_H
#define MEMORY_H

/* Constants */
const int MEMORY_SIZE = 256;

class Memory {
public:
    Memory();
    ~Memory();

    /* Basic Operations */
    uint32_t load_word(uint32_t addr);
    void store_word(uint32_t addr, uint32_t val);

    /* Debug */
    void memory_dump(uint32_t addr);
    
private:
    uint8_t mem[MEMORY_SIZE];
};

#endif