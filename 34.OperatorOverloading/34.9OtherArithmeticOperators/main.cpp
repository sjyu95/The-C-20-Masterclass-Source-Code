#include <iostream>
#include "point.h"

int main() {
    Point p1{10,20};
    Point p2{1,2};

    auto p3 = p1 + p2;
    std::cout << p3 << std::endl;

    auto p4 = p1 - p2;
    std::cout << p4 << std::endl;

    ++p4;
    std::cout << p4 << std::endl;

    p4++;
    std::cout << p4 << std::endl;

    return 0;
}