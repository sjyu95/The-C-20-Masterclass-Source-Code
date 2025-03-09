#include <iostream>
#include "outer.h"

Outer::Outer(int intVar, double doubleVar) : m_intVar(intVar), m_doubleVar(doubleVar) {
    CALL_COUNT++;
}

void Outer::doSomething() {
    Inner inner(10);
    std::cout << "getInnerValue : " << inner.getInnerValue() << std::endl;
    inner.doSomethingWithOuter(this);
}

Outer::Inner::Inner(double inner) : m_innerVar(inner) {}
double Outer::Inner::getInnerValue() {
    return m_innerVar;
}

void Outer::Inner::doSomethingWithOuter(Outer* outer) {
    std::cout << "static outer call count is " << Outer::CALL_COUNT << std::endl;
    std::cout << "Outer.m_intVar : " << outer->m_intVar << ", Outer.m_doubleVar" << outer->m_doubleVar << std::endl;
}

