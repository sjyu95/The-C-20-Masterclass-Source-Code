#include <iostream>
#include "ellipse.h"
#include "shape.h"

int main() {
    Shape shape{"shape"};
    std::cout <<shape.getCount() << std::endl;

    Ellipse ellipse{1,2,"ellipse"};
    std::cout << ellipse.getCount() << std::endl;

    return 0;
}