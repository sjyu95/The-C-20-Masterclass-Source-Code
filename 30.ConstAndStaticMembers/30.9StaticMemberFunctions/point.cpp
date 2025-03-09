#include <iostream>
#include "point.h"

Point::Point(double x, double y) : m_x(x), m_y(y) {
	CALL_COUNT++;
}

double Point::getCallCount() {
    return CALL_COUNT;
}

void Point::printInfo(const Point& point) {
    std::cout << "x : " << point.m_x << ", y : " << point.m_y << std::endl;
}