#include <iostream>
#include "point.h"

Point Point::s_point1{1,1};

Point::Point(double x, double y) : m_x(x), m_y(y) {
	CALL_COUNT++;
}

void Point::printInfo() {
	std::cout << "call_count : " << CALL_COUNT << std::endl;
}

void Point::initialize_pointer() {
	m_point2 = new Point{1,1};
}
