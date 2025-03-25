#include <iostream>
#include "base.h"
#include "derived.h"

int main() {
    Base* pBase = new Derived;
    std::cout << "Derived::Add(), Base default paremeter, result : " << pBase->Add() << std::endl;

    // const Base& rBase = Derived{};
    Base&& rBase = Derived{};
    std::cout << "Derived::Add(), Base default paremeter, result : " << pBase->Add() << std::endl;

    Derived derived;
    std::cout << "Derived::Add(), derived default paremeter, result : " << derived.Add() << std::endl;

    Base base = Derived{};
    std::cout << "Base::Add(), slicing, result : " << base.Add() << std::endl;

    return 0;
}