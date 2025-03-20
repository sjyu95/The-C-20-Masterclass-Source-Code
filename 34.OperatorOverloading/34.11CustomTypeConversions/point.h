#ifndef POINT_H
#define POINT_H

#include <cassert>
#include <iostream>

class Number;

class Point {
	friend std::ostream& operator<< (std::ostream& os, const Point& point);
	friend std::istream& operator>> (std::istream& is, Point& point);
	// friend Point& operator+= (Point& left, const Point& right);
	// friend Point& operator-= (Point& left, const Point& right);
	friend Point operator+ (const Point& left, const Point& right);
	friend Point operator- (const Point& left, const Point& right);
public:
	Point() = default;
	Point(double x, double y);
	Point(Number x, Number y);

	Point& operator++() {
		m_x++; m_y++;
		return *this;
	}

	Point operator++(int) {
		return Point{m_x++, m_y++};
	}

	Point& operator+=(const Point& point) {
		m_x+=point.m_x;
		m_y+=point.m_y;
		return *this;
	}

	Point& operator-=(const Point& point) {
		m_x-=point.m_x;
		m_y-=point.m_y;
		return *this;
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

// inline Point& operator+= (Point& left, const Point& right) {
// 	left.m_x += right.m_x;
// 	left.m_y += right.m_y;
// 	return left;
// }

// inline Point& operator-= (Point& left, const Point& right) {
// 	left.m_x -= right.m_x;
// 	left.m_y -= right.m_y;
// 	return left;
// }

inline Point operator+ (const Point& left, const Point& right) {
	Point p{left};
	return p += right;
}

inline Point operator- (const Point& left, const Point& right) {
	Point p{left};
	return p -= right;
}

#endif