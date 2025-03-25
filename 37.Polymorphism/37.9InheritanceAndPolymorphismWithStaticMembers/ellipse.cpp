#include <iostream>
#include "ellipse.h"
#include "shape.h"

Ellipse::Ellipse(int x, int y, std::string_view description) : Shape{description}, m_x{x}, m_y{y} {
    mCount++;
}

void Ellipse::draw() const {
    std::cout << "Ellipse::draw() : x " << m_x << ", y " << m_y << std::endl;
}
int Ellipse::getCount() const {
    return mCount;
}