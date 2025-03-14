#include <iostream>
#include "point.h"

namespace Geom {
    Point::Point(double x, double y) : m_x(x), m_y(y) {
        CALL_COUNT++;
    }

    void Point::printInfo(const Point & point) {
        std::cout << "call_count : " << CALL_COUNT << std::endl;
        std::cout << "x : " << point.m_x << ", y : " << point.m_y << std::endl;
    }
}