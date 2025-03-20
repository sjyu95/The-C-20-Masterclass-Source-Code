#include <iostream>
#include "point.h"

int main() {
    Point p1{10,20};
    Point p2{1,2};

    std::cout << p1 << std::endl;

    p1-=p2;
    std::cout << p1 << std::endl;

    std::cout << (p1 + p2) << std::endl;
    std::cout << (p1 - p2) << std::endl;

    return 0;
}