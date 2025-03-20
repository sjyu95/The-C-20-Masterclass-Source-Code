#include <iostream>
#include "point.h"

int main() {
    Point p1{1,2};
    std::cout << p1 << std::endl;
    // auto p2 = ++p1;
    ++p1;
    std::cout << p1 << std::endl;
    // std::cout << p2 << std::endl;

    return 0;
}