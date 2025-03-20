#include <iostream>
#include "point.h"

int main() {
    Point p{1,2};
    std::cout << p << std::endl; // {1,2}
    std::cout << p++ << std::endl; // {1,2}
    std::cout << p << std::endl; // {2,3}

    return 0;
}