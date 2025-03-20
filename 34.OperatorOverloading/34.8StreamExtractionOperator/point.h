#ifndef POINT_H
#define POINT_H

#include <cassert>
#include <iostream>

class Point {
	friend std::ostream& operator<< (std::ostream& os, const Point& point);
	friend std::istream& operator>> (std::istream& is, Point& point);
public:
	Point() = default;
	Point(double x, double y);

private:
	double m_x{};
	double m_y{};
};

inline std::ostream& operator<< (std::ostream& os, const Point& point) {
	os << "m_x : " << point.m_x << ", m_y : " << point.m_y;
	return os;
 }

inline std::istream& operator>> (std::istream& is, Point& point) {
	is >> point.m_x >> point.m_y;
	return is;
}

#endif