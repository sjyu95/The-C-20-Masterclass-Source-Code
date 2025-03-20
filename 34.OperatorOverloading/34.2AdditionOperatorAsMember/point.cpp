#include <iostream>
#include "point.h"

Point::Point(double x, double y) : m_x{x}, m_y{y} {}

Point Point::operator+(const Point& right) const {
    return Point(m_x + right.m_x, m_y + right.m_y);
}

void Point::print_info() const {
    std::cout << "x : " << m_x << ", y : " << m_y << std::endl;
}
