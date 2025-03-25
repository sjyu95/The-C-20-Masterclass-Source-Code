#include <iostream>
#include "shape.h"

Shape::Shape(std::string_view description) : m_description{description} {}

void Shape::draw() const {
    std::cout << "Shape::draw() called" << std::endl;
}

void Shape::func() const {
    std::cout << "Shape::func() called" << std::endl;
}