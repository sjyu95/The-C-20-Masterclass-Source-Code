#include <iostream>
#include "ellipse.h"

Ellipse::Ellipse(int x, int y, std::string_view description) : Shape{description}, m_x{x}, m_y{y} {}

void Ellipse::func() const {
    std::cout << "Ellipse::func() called" << std::endl;
}

void Ellipse::draw() const {
    std::cout << "Ellipse::draw() called" << std::endl;
}
