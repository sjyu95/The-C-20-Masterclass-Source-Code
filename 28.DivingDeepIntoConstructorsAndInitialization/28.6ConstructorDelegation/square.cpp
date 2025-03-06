#include <iostream>
#include "square.h"

Square::Square(double side)
: Square(side, "black") {
// {
//     Square(side, "black");
    std::cout << "one parameter constructor" << std::endl;
}

Square::Square(double side, std::string_view color)
: m_side{side}
, m_color{color} {
    m_point = 1.1;
    std::cout << "three parameter constructor" << std::endl;
}

Square::~Square() {
    std::cout << "destructor" << std::endl;
}

double Square::surface() const {
    return m_side * m_side;
}