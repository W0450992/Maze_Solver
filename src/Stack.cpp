//
// Created by mark- on 2023-02-09.
//

#include "Stack.h"
#include "Node.h"
#include <iostream>


void Stack::push(Cell cell) {
    // create a new node
    auto node = new Node();
    node->m_data = std::move(cell);
    node->m_next = m_first;
    m_first = node;
}

void Stack::pop() {
    // remove the first node

    // check for empty stack
    if (m_first == nullptr) {
        // maybe throw exception, print message or do nothing....
        return;
    }
    // one node exists
    auto node = m_first;
    m_first = m_first->m_next;
    delete node;
}

Cell Stack::peek() {
    if (m_first == nullptr) return {0,0};
    return m_first->m_data;
}

//~Stack() {
//    auto node = m_first;
//        while (node != nullptr) {
//            auto temp = node;
//            node = node->m_next;
//            delete temp;
//        }
//    while (m_first != nullptr) {
//        pop();
//    }
//}




std::ostream& operator<<(std::ostream& output, Stack& stack) {
    auto node = stack.m_first;
    while (node != nullptr) {
        output << "Cell X" << node->m_data.x << ", ";
        output << "Cell Y " << node->m_data.y << std::endl;
        node = node->m_next;
    }
    return output;
}


