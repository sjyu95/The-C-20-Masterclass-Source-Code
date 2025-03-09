#include <iostream>
#include "point.h"

int main(int argc, char** argv) {
    Point point{1.0, 2.0};

    std::cout << "CallCount : " << Point::getCallCount() << std::endl;
    Point::printInfo(point);

    return 0;
}