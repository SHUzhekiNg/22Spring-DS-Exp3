cmake_minimum_required(VERSION 3.25)
project(binary_sort_tree)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(binary_sort_tree
        Assistance.h
        BinarySortTree.h
        BinTreeNode.h
        LinkQueue.h
        Node.h
        TestBinarySortTree.cpp)
