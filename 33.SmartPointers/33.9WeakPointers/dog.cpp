#include "dog.h"

#include <iostream>

Dog::Dog(std::string name) : mName(name) {
    std::cout << "Dog constructor : name " << mName << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor : name " << mName << std::endl;
}

std::string Dog::getName() const {
    return mName;
}

void Dog::setName(std::string_view name) {
    mName = name;
}

void Dog::printName() const {
    std::cout << "dog name is " << mName << std::endl;
}