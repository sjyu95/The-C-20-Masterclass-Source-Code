#ifndef POINT_H
#define POINT_H

#include <cassert>

class Point {
	friend Point operator+(const Point& left, const Point& right);
public:
	Point() = default;
	Point(double x, double y);

	double operator[](size_t index) const {
		assert (index == 0 || index == 1);
		return !index ? m_x : m_y;
	}
	double& operator[](size_t index) {
		assert (index == 0 || index == 1);
		return !index ? m_x : m_y;
	}
	void print_info() const;

private:
	double m_x{};
	double m_y{};
};

#endif