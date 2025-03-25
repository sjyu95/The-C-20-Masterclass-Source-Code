#include <iostream>
#include <memory>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main(){
    Circle circle{1,"circle"};
    circle.draw();

    Shape* shape = &circle;
    shape->draw(111);

    return 0;
}