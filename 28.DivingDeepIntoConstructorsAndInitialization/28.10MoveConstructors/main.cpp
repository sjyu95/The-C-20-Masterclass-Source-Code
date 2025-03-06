#include <iostream>
#include "point.h"

int main(int argc, char** argv) {
    Point p1{1.0, 2.0};
    Point p2{std::move(p1)};

    std::cout << "----" << std::endl;
    Point p4{4.5,5.5};
    Point p3{std::move(p4)};

    std::cout << "----2" << std::endl;
    Point* p6{new Point{5.5, 6.5}};
    // Point* p5{std::move(p6)}; // no call move constructor
    Point* p5{p6};

    return 0;
}