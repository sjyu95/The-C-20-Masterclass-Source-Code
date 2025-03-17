#include <iostream>

void some_func() {
    int age{}; // no linkage
    std::cout << "age : " << age << ", &age : " << &age << std::endl;
}

const int age{48}; // internal linkage
// void print_age(); // print 32
extern void print_age(); // print 32
// void print_age() { // print 48
//     std::cout << "age : " << age << ", &age : " << &age << std::endl;
// }

double distance{3.8}; // external linkage. default is global.
void print_distance();
// void print_distance() { // duplicated definition
//     std::cout << "distance : " << distance << ", &distance : " << &distance << std::endl;
// }

int main(int argc, char** argv) {
    some_func();
    print_age();
    print_distance();
    return 0;
}