#include <iostream>
#include "circle.h"
#include "rectangle.h"

int main() {
    Shape* pShape { new Circle{10,"circle"}};
    std::cout << "circle perimeter : " << pShape->perimeter() << std::endl;
    std::cout << "circle surface : " << pShape->surface() << std::endl;
    std::cout << "typeid(pShape) : " << typeid(pShape).name() << std::endl;
    std::cout << "typeid(*pShape) : " << typeid(*pShape).name() << std::endl;

    Shape* pShape2 { new Rectangle{1,2,"rectangle"}};
    std::cout << "rectangle perimeter : " << pShape2->perimeter() << std::endl;
    std::cout << "rectangle surface : " << pShape2->surface() << std::endl;
    std::cout << "typeid(pShape2) : " << typeid(pShape2).name() << std::endl;
    std::cout << "typeid(*pShape2) : " << typeid(*pShape2).name() << std::endl;

    delete pShape;
    delete pShape2;

    return 0;
}