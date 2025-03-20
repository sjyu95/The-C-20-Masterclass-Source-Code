#include <iostream>
#include "point.h"

int main() {
    Point p{1,2};
    ++p;
    std::cout << p << std::endl;

    return 0;
}