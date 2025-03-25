#ifndef NONPOLYMOPHIC_H
#define NONPOLYMOPHIC_H

#include <iostream>

class StaticBase {
public:
    StaticBase() = default;

    void print() const {
        std::cout << "StaticBase::print()" << std::endl;
    }
};

class StaticDerived : public StaticBase {
public:
    StaticDerived() = default;

    void print() const {
        std::cout << "StaticDerived::print()" << std::endl;
    }
};

#endif