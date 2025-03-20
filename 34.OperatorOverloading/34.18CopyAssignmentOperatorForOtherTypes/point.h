#ifndef POINT_H
#define POINT_H

#include <cassert>
#include <iostream>

class Car;

class Point {
	friend std::ostream& operator<< (std::ostream& os, const Point& point);
public:
	Point() = default;
	Point(double x, double y, double data);

	Point(const Point& p); // copy constructor
	Point& operator=(const Point& p); // copy assignment operator

	Point& operator=(const Car& c); // other type copy assignment operator

private:
	double m_x{};
	double m_y{};
	double* m_data{};
};

inline std::ostream& operator<< (std::ostream& os, const Point& point) {
	os << "m_x : " << point.m_x << ", m_y : " << point.m_y << ", m_data : " << *(point.m_data) << ", &m_data : " << point.m_data;
	return os;
 }

#endif