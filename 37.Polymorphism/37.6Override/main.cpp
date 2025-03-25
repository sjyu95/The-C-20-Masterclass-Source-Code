#include <iostream>
#include <memory>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main(){

    Circle circle1{1, "circle1"};
    Circle circle2{2, "circle2"};
    Oval oval1{1,2,"oval1"};
    Oval oval2{3,4,"oval2"};

    Shape* shapes[]{&circle1, &circle2, &oval1, &oval2};
    for (auto s : shapes) {
        s->draw();
    }
    return 0;
}