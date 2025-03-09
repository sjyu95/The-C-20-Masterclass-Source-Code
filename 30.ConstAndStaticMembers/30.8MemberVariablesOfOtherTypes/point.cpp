#include "Point.h"

Integer Point::s_c{3};

Point::Point(int x, int y) : m_x(Integer(x)), m_y(Integer(y)) {
}

Point::Point(const Point & p) : Point(p.getX(), p.getY()) {
}

Point::Point(Point && p) : Point(p.getX(), p.getY()) {
}
