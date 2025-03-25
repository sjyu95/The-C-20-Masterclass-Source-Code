#include <iostream>
#include "circle.h"
#include "oval.h"
#include "shape.h"

int main() {
    std::cout << "sizeof(Shape) : " << sizeof(Shape) << std::endl;
    std::cout << "sizeof(Oval) : " << sizeof(Oval) << std::endl;
    std::cout << "sizeof(Circle) : " << sizeof(Circle) << std::endl;

    Shape shape{Circle{2, "circle"}};
    shape.draw();
    return 0;
}