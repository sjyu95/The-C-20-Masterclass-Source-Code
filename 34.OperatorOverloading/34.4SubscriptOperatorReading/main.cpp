#include <iostream>
#include "point.h"

int main(int argc, char** argv) {
    Point p1{1,2};
    std::cout << "m_x : " << p1[0] << ", m_y : " << p1[1] << std::endl;
    // std::cout << "m_x : " << p1[0] << ", m_y : " << p1[11] << std::endl; // assertion failed

    return 0;
}