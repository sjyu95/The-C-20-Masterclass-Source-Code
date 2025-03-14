#ifndef POINT_H
#define POINT_H

namespace Geom {
    class Point {
        public:
        Point(double x, double y);
        inline static size_t CALL_COUNT{0};

        static void printInfo(const Point & point);

        private:
        double m_x{};
        double m_y{};
        };
}

#endif