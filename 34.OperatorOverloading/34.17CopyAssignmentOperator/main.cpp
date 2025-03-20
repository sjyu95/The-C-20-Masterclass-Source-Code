#include <iostream>
#include "point.h"

int main() {
    Point p1{1,2,3}, p2{4,5,6};

    std::cout << "p1 : " << p1 << std::endl;
    std::cout << "p2 : " << p2 << std::endl;

    p1 = p2;
    std::cout << "p1 : " << p1 << std::endl;
    std::cout << "p2 : " << p2 << std::endl;

    auto p3{p2};
    std::cout << "p3 : " << p3 << std::endl;

    return 0;
}