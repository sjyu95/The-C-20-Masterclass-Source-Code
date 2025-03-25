#include <iostream>
#include "circle.h"
#include "oval.h"

Circle::Circle(int radius, std::string_view description) : Oval(radius, radius, description) {}

void Circle::draw() const {
    std::cout << "Circle::draw() : ";
    std::cout << ", radius : " << getX() << ", y_radius : " << getY() << std::endl;
}