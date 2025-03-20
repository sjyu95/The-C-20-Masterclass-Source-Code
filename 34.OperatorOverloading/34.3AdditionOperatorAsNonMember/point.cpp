#include <iostream>
#include "point.h"

Point::Point(double x, double y) : m_x{x}, m_y{y} {}

void Point::print_info() const {
    std::cout << "x : " << m_x << ", y : " << m_y << std::endl;
}

Point operator+(const Point& left, const Point& right) {
	return Point{left.m_x + right.m_x, left.m_y + right.m_y};
}