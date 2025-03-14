#include <iostream>
#include "line.h"

namespace Geom {
    Line::Line(const Point& from, const Point& to) : m_from(from), m_to(to) {}
    void Line::printInfo() const {
        std::cout << "from : ";
        Point::printInfo(m_from);
        std::cout << "to : ";
        Point::printInfo(m_to);
    }
}