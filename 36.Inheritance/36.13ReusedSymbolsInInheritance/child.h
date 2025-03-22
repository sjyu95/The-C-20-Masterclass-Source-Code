#ifndef CHILD_H
#define CHILD_H

#include <iostream>
#include "parent.h"

class Child : public Parent {
public:
    Child() = default;
    Child(int member) : Parent{}, m_member{member} {}

    void print_member_value() {
        std::cout << "child member value is " << m_member << std::endl;
        std::cout << "parent member value is " << Parent::m_member << std::endl;
    }
private:
    int m_member{};
};

#endif