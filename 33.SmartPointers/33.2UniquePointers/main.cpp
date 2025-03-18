#include <iostream>
#include <memory>
#include "dog.h"

int main(int argc, char** argv) {
    // stack variable
    Dog dog1{"Snoopy"};
    dog1.printName();

    // heap variable using new
    Dog * p_dog1 = new Dog{"Snoopy-1"};
    p_dog1->printName();
    delete p_dog1;

    int * p_int = new int{1};
    std::cout << "*p_int : " << *p_int << ", p_int address : " << p_int << std::endl;
    delete p_int;

    // heap variable using smart pointer
    Dog * p_dog2 = new Dog{"Snoopy-2"};
    std::unique_ptr<Dog> p_dog3{p_dog2};
    p_dog3->printName();

    std::unique_ptr<Dog> p_dog4{new Dog{"Snoopy-4"}};
    // std::unique_ptr<Dog> p_dog4 = new Dog{"Snoopy-4"}; // assign error
    p_dog4->printName();

    // heap variable using make_ptr
    auto p_dog5 = std::make_unique<Dog>("Snoopy-5");
    p_dog5->printName();

    if (p_dog5) {
        std::cout << "p_dog address : " << p_dog5.get() << std::endl;
    }

    // reset ptr
    p_dog5.reset();
    if (!p_dog5) {
        std::cout << "p_dog address : " << p_dog5.get() << std::endl;
    }

    return 0;
}