#include "Bitboard.h"


void Bitboard::set_bits(int value) {
    board = value;
}

void Bitboard::clear_bits() {
    board = 0;
}

void Bitboard::print_board() const {
    // Using Little-Endian Approach: Least Significant Bit (LSB) to Most Significant Bit (MSB)
    // Left to Right, Bottom Top Approach
    for (auto i = 63; i >= 0; --i) {
        U64 bit = (board >> i) & 1;
        std::cout << bit;
        if (i % 8 == 0) {
            std::cout << std::endl;
        }
    }
}

