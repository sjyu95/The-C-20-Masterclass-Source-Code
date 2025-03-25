#ifndef POLYMOPHIC_H
#define POLYMOPHIC_H

#include <iostream>

class DynamicBase {
public:
    DynamicBase() = default;
    virtual ~DynamicBase() = default;

    virtual void print() const {
        std::cout << "DynamicBase::print()" << std::endl;
    }
};

class DynamicDerived : public DynamicBase {
public:
    DynamicDerived() = default;

    void print() const override {
        std::cout << "DynamicDerived::print()" << std::endl;
    }
};

#endif