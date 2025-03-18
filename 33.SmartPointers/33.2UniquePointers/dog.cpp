#include "dog.h"

#include <iostream>

Dog::Dog(std::string name) : mName(name) {
    std::cout << "constructor : name " << mName << std::endl;
}

Dog::~Dog() {
    std::cout << "destructor : name " << mName << std::endl;
}

void Dog::printName() {
    std::cout << "dog name is " << mName << std::endl;
}