#include <iostream>
#include "dog.h"

Dog::Dog(std::string_view name) : mName(name) {}

void Dog::print() const {
    std::cout << "dog name is " << mName << std::endl;
}