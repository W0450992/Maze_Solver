cmake_minimum_required(VERSION 3.17)
project(Assignment_2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Assignment_2
        src/main.cpp src/Stack.cpp src/Stack.h src/Node.cpp src/Node.h src/Cell.cpp src/Cell.h src/ReadFile.h src/ReadFile.cpp src/Maze.cpp src/Maze.h)
