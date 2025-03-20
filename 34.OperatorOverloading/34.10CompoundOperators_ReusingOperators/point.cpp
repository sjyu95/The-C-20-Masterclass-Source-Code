#include <iostream>
#include "point.h"

Point::Point(double x, double y) : m_x{x}, m_y{y} {}

// std::ostream& operator<< (std::ostream& os, const Point& point) {
// 	os << "m_x : " << point.m_x << ", m_y : " << point.m_y;
// 	return os;
//  }