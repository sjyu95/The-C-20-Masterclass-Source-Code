#include <iostream>
#include "shape.h"

Shape::Shape(std::string_view description) : m_description{description} {}

std::string Shape::getDescription() const {
    return m_description;
}

void Shape::draw() const {
    std::cout << "Shape::draw() description : " << m_description << std::endl;
}