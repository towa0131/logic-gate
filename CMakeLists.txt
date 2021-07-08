cmake_minimum_required(VERSION 2.8)

project(logic_gate CXX)

add_executable(logic_gate main.cpp and.cpp or.cpp nand.cpp nor.cpp xor.cpp not.cpp)
