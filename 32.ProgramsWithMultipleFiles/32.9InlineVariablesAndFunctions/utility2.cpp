#include <iostream>
#include "utility.h"

inline int age{11};
// constexpr int age{11};

inline void print_age() {
    std::cout << "age : " << age << ", &age : " << &age << std::endl;
}

void print_utilities2() {
    std::cout << "print_utilities2" << std::endl;
    print_age();
}