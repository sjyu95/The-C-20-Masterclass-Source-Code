#ifndef POINT_H
#define POINT_H

class Point {
public:
	Point() = default;
	Point(double x, double y);

	Point operator+(const Point& right) const;

	void print_info() const;

private:
	double m_x{};
	double m_y{};
};

#endif