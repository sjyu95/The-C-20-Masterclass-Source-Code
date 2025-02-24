#include <iostream>

// declairation - prototype
void print_age(int age = 22);
void print_age(long int age = 88l);

int main(int argc, char** argv) {
    int age{40};
    print_age(age);

    long age2{0};
    print_age(age2);

    return 0;
}

// definition
void print_age(int age) {
    std::cout << "print age int : " << age << std::endl;
}

void print_age(long int age) {
    std::cout << "print age long int : " << age << std::endl;
}
