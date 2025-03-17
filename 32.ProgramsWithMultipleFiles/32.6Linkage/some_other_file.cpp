#include <iostream>

const int age{32}; // internal linkage
void print_age() {
    std::cout << "age : " << age << ", &age : " << &age << std::endl;
}

// double distance{3.8}; // // duplicated definition
extern double distance;
void print_distance() {
    std::cout << "distance1 : " << distance << ", &distance : " << &distance << std::endl;
}