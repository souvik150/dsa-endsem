cmake_minimum_required(VERSION 3.23)
project(dsa_for_fat)

set(CMAKE_CXX_STANDARD 23)

add_executable(dsa_for_fat main.cpp)
add_executable(bfs graph-bfs.cpp graph-cycleDetect.cpp graph-printPathGraph.cpp graph-shortestPath.cpp graph-connected.cpp)
add_executable(dfs graph-dfs.cpp)
add_executable(palindrome linkedlist/palindrome.cpp)
add_executable(llinandout linkedlist/inandout.cpp linkedlist/bubblell.cpp linkedlist/swapNodes.cpp linkedlist/kreverse.cpp linkedlist/deleteMNnodes.cpp linkedlist/evenAfterOdd.cpp)
add_executable(bubblell linkedlist/bubblell.cpp sorting/mainsorting.cpp sorting/mergesort.cpp sorting/quicksort.cpp sorting/search.cpp sorting/countingsort.cpp sorting/heapsort.cpp stack&queues/inftopos.cpp stack&queues/infixtopre.cpp stack&queues/redubracket.cpp)
add_executable(mergesorted linkedlist/mergeTwoSorted.cpp)
add_executable(reversell  linkedlist/reversell.cpp)
