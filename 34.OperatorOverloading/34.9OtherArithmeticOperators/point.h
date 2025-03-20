#ifndef POINT_H
#define POINT_H

#include <cassert>
#include <iostream>

class Point {
	friend std::ostream& operator<< (std::ostream& os, const Point& point);
	friend std::istream& operator>> (std::istream& is, Point& point);
	friend Point operator+ (const Point& left, const Point& right);
	friend Point operator- (const Point& left, const Point& right);
public:
	Point() = default;
	Point(double x, double y);

	Point& operator++ () {
		m_x++; m_y++;
		return *this;
	}

	Point operator++ (int) {
		return Point{m_x++, m_y++};
	}

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

inline Point operator+ (const Point& left, const Point& right) {
	return Point{left.m_x + right.m_x, left.m_y + right.m_y};
}

inline Point operator- (const Point& left, const Point& right) {
	return Point{left.m_x - right.m_x, left.m_y - right.m_y};
}

#endif