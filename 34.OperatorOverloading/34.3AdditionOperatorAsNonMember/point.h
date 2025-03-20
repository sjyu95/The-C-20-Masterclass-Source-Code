#ifndef POINT_H
#define POINT_H

class Point {
	friend Point operator+(const Point& left, const Point& right);
public:
	Point() = default;
	Point(double x, double y);

	void print_info() const;

private:
	double m_x{};
	double m_y{};
};

// inline Point operator+(const Point& left, const Point& right) {
// 	return Point{left.m_x + right.m_x, left.m_y + right.m_y};
// }

#endif