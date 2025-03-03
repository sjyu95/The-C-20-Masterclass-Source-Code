#include <iostream>
#include "point.h"

int main(int argc, char** argv) {
    Point p1;
    Point p2;
    p2.m_x = 2;
    p2.m_y = 2;
    std::cout << "distance from p1 to p2 : " << p1.distance_to(p2) << std::endl;
    
    return 0;
}