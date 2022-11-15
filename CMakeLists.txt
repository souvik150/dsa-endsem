cmake_minimum_required(VERSION 3.23)
project(dsa_for_fat)

set(CMAKE_CXX_STANDARD 23)

add_executable(dsa_for_fat main.cpp)
add_executable(palindrome linkedlist/palindrome.cpp)
add_executable(llinandout linkedlist/inandout.cpp linkedlist/bubblell.cpp linkedlist/swapNodes.cpp linkedlist/kreverse.cpp linkedlist/deleteMNnodes.cpp)
add_executable(bubblell linkedlist/bubblell.cpp)
add_executable(mergesorted linkedlist/mergeTwoSorted.cpp)
add_executable(reversell  linkedlist/reversell.cpp)
