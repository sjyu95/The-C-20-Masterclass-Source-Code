#include <iostream>
#include "shape.h"

int Shape::mCount{0};

Shape::Shape(std::string_view desc) : mDescription(desc) {
    mCount++;
}

void Shape::draw() const {
    std::cout << "Shape::draw(), mDescription : " << mDescription << std::endl;
}

int Shape::getCount() const {
    return mCount;
}