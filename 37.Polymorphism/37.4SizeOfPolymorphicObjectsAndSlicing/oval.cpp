#include <iostream>
#include "shape.h"
#include "oval.h"

Oval::Oval(int x, int y, std::string_view description) : Shape(description), m_x_radius{x}, m_y_radius{y} {}

int Oval::getX() const {
    return m_x_radius;
}

int Oval::getY() const {
    return m_y_radius;
}

void Oval::draw() const {
    std::cout << "Oval::draw() description : " << getDescription();
    std::cout << ", x_radius : " << m_x_radius << ", y_radius : " << m_y_radius << std::endl;
}