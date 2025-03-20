#ifndef POINT_H
#define POINT_H

#include <cassert>

class Point {
	friend std::ostream& operator<< (std::ostream& os, const Point& point);
public:
	Point() = default;
	Point(double x, double y);

private:
	double m_x{};
	double m_y{};
};

// inline std::ostream& operator<< (std::ostream& os, const Point& point) {
// 	os << "m_x : " << point.m_x << ", m_y : " << point.m_y;
// 	return os;
//  }

#endif