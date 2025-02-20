#include <iostream>

void say_age(unsigned age); // declairation - prototype

int main() {
    unsigned age{23};

    std::cout << "before age is " << age << ", address : " << &age << std::endl;
    say_age(age);
    std::cout << "after age is " << age << ", address : " << &age << std::endl;
    
    return 0;
}

void say_age(unsigned age) { // definition
    std::cout << "age is " << ++age << ", address : " << &age << std::endl;
}