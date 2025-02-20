#include <iostream>

unsigned dog_count{2};

void say_age(const unsigned* const age); // declairation - prototype

int main() {
    unsigned age{23};

    std::cout << "before age is " << age << ", address : " << &age << std::endl;
    say_age(&age);
    std::cout << "after age is " << age << ", address : " << &age << std::endl;
    
    return 0;
}

void say_age(const unsigned* const age) { // definition
    // std::cout << "age is " << ++(*age) << ", address : " << age << ", &address : " << &age << std::endl; // dereferencing
    // age = &dog_count;
    std::cout << "age is " << (*age) << ", address : " << age << ", &address : " << &age << std::endl; // dereferencing
}