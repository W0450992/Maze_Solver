//
// Created by mark- on 2023-02-10.
//
#include "Stack.h"
#include "Node.h"
#ifndef ASSIGNMENT_2_MAZE_H
#define ASSIGNMENT_2_MAZE_H


class Maze {

public:
    void start_maze(std::string *array, Stack stack);
    void check_cell(char *array[]);
};


#endif //ASSIGNMENT_2_MAZE_H
