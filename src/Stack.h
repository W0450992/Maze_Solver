//
// Created by mark- on 2023-02-09.
//
#include "Node.h"
#include <iostream>
#ifndef ASSIGNMENT_2_STACK_H
#define ASSIGNMENT_2_STACK_H


class Stack {
private:
    Node* m_first {nullptr};

public:
    friend std::ostream &operator<<(std::ostream &output, Stack &stack);
};


#endif //ASSIGNMENT_2_STACK_H
