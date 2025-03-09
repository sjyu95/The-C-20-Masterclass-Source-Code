#include <iostream>
#include "point.h"

int main(int argc, char** argv) {
    Point point{1.0, 2.0};
    std::cout << "call count : " << Point::CALL_COUNT << std::endl;

    Point points[]{point, Point{3.1,4.1}, Point{5.2,6.2}};
    std::cout << "total call count : " << Point::CALL_COUNT << std::endl;

    return 0;
}