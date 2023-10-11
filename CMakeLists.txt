cmake_minimum_required(VERSION 3.26)
project(Chess_Engine_C__)

set(CMAKE_CXX_STANDARD 20)

add_executable(Chess_Engine_C__ main.cpp
        src/Game/Bitboard.h
        src/Game/Bitboard.cpp
        src/Game/Bitboard.cpp)
