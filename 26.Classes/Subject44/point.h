#include <cmath>

class Point {
public:
    double m_x{1};
    double m_y{1};
    
    double distance_to(Point p2) {
        return std::hypot(p2.m_x - m_x, p2.m_y - m_y);
    }
};