#include <iostream>
#include "point.h"

Point::Point(double x, double y, double data) : m_x{x}, m_y{y}, m_data{new double{data}} {}


Point::Point(const Point& p) {
    m_x = p.m_x;
    m_y = p.m_y;
    m_data = new double{*(p.m_data)};
}

Point& Point::operator=(const Point& p) {
    if (this != &p) {
        delete m_data;
        m_x = p.m_x;
        m_y = p.m_y;
        m_data = new double{*(p.m_data)};
    }
    return *this;
}
