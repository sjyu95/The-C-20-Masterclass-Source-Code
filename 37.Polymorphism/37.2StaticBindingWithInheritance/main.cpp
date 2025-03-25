#include "circle.h"
#include "oval.h"
#include "shape.h"

void draw_circle(const Circle& circle) {
    circle.draw();
}

void draw_oval(const Oval& oval) {
    oval.draw();
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

    Shape& rShape = shape;
    rShape.draw();

    rShape = oval;
    rShape.draw();

    rShape = circle;
    rShape.draw();

    draw_circle(circle);
    draw_oval(oval);

    Shape shapes[]{shape, Shape("shape2")};
    for (size_t i{}; i < std::size(shapes); i++) {
        shapes[i].draw();
    }

    return 0;
}