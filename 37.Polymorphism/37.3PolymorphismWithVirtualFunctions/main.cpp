#include "circle.h"
#include "oval.h"
#include "shape.h"

void draw_shape(const Shape& shape) {
    shape.draw();
}

int main() {
    Shape shape{"This is shape."};
    Oval oval{1,2,"oval"};
    Circle circle{5,"circle"};

    Shape* pShape = nullptr;
    pShape = &shape;
    pShape->draw();

    pShape = &oval;
    pShape->draw();

    pShape = &circle;
    pShape->draw();

    Shape& rShape = circle;
    rShape.draw();

    // Shape& rShape = shape;
    // rShape.draw();

    // rShape = circle; // shape으로 circle이 복사됨
    // rShape.draw(); // shape::draw가 호출됨

    // rShape = oval;
    // rShape.draw();

    // rShape = circle;
    // rShape.draw();

    draw_shape(circle);
    draw_shape(oval);

    Shape* shapes[]{&shape, &oval, &circle};
    for (size_t i{}; i < std::size(shapes); i++) {
        shapes[i]->draw();
    }

    return 0;
}