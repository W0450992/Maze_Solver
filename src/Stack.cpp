//
// Created by mark- on 2023-02-09.
//

#include "Stack.h"
#include <iostream>
std::ostream& operator<<(std::ostream& output, Stack& stack) {
    auto node = stack.m_first;
//    while (node != nullptr) {
//        output << "Name: " << node->m_data.m_name << ", ";
//        output << "ID: " << node->m_data.m_id << std::endl;
//        node = node->m_next;
//    }
    return output;
}