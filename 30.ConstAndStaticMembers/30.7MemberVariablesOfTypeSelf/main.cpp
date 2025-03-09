#include <iostream>
#include "point.h"

int main(int argc, char** argv) {
    Point point{1.0, 2.0};
    std::cout << "call count : " << Point::CALL_COUNT << std::endl;

    Point points[]{point, Point{3.1,4.1}, Point{5.2,6.2}};
    std::cout << "total call count : " << Point::CALL_COUNT << std::endl;

    Point::s_point1.printInfo();

    Point point2{2,3};
    point2.initialize_pointer();
    Point::s_point1.printInfo();

    return 0;
}