cmake_minimum_required(VERSION 3.21)
project(Die)

set(CMAKE_CXX_STANDARD 14)

add_executable(Die DiceGame.cpp Die.h Die.cpp)
