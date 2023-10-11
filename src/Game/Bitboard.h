#include <iostream>
#include <cstdint>


#ifndef BITBOARD_H
#define BITBOARD_H

// Alias the name for unsigned long long - Use U64 throughout the Project
typedef u_int64_t U64;

class Bitboard {
public:
    U64 board;  // Choice of keeping Public: Easier Manipulation in the ChessBoard Class

    Bitboard(): board(0x0) {};
    explicit Bitboard(U64 value): board(value) {};



    // Methods to Manipulate the Bits
    void set_bits(int value);
    void clear_bits();
    void print_board() const;
};

#endif BITBOARD_H