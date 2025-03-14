#ifndef LINE_H
#define LINE_H

#include "point.h"

namespace Geom {
    class Line {
    public:
        Line(const Point& from, const Point& to);
        void printInfo() const;
    private:
        Point m_from;
        Point m_to;
    };
}

#endif