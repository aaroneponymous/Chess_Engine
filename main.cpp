#include <iostream>
#include "src/Game/Bitboard.h"

int main() {

    Bitboard board_w(0x8e92095423080000);
    Bitboard board_b(0x606000005c807f00);
    board_b.print_board();
    std::cout << std::endl;
    board_w.print_board();
    std::cout << std::endl;


    // nbors = (full dilation 1) & empty

    Bitboard full;
    Bitboard nbors;
    Bitboard dilated;
    Bitboard empty;
    full.board = board_w.board | board_b.board;
    full.print_board();
    std::cout << std::endl;



//    dilated.board = full.board | (full.board << 7) | (full.board << 8) | (full.board << 9) | (full.board << 1) |
//                    (full.board >> 1) | (full.board >> 9) | (full.board >> 8) | (full.board >> 7);

//    nbors.board = (full.board) & empty.board;
//    dilated.print_board();
//    std::cout << std::endl;
//    nbors.print_board();





    return 0;
}
