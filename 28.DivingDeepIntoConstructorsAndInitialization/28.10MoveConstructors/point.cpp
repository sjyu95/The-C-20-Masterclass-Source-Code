#include <iostream>
#include "point.h"

Point::Point(double x, double y)
: m_x(new double{x})
, m_y(new double{y}) {

}

Point::~Point() {
	delete m_x;
	delete m_y;
	std::cout << "call destructor" << std::endl;
}

Point::Point(const Point& point)
: Point{*point.getX(), *point.getY()} {
	std::cout << "call copy constructor" << std::endl;
}

Point::Point(Point && point)
: Point(*point.getX(), *point.getY()) {
	std::cout << "call move constructor" << std::endl;
}

const double* Point::getX() const {
	return m_x;
}

const double* Point::getY() const {
	return m_y;
}

void Point::setX(double x) {
	*(m_x) = x;
}

void Point::setY(double y) {
	*(m_y) = y;
}

void Point::printInfo() const {
	std::cout << "x : " << *m_x << ", y : " << *m_y << std::endl;
}