#ifndef POINT_H
#define POINT_H

class Point {
public:
	Point(double x, double y);
	~Point();

	Point(const Point& point);
	Point(Point && point);

	const double* getX() const;
	const double* getY() const;

	void setX(double x);
	void setY(double y);

	void printInfo() const;

private:
	double* m_x{};
	double* m_y{};
};

#endif