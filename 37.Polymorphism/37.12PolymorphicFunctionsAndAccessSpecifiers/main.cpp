#include <memory>
#include "ellipse.h"
#include "shape.h"

int main() {
    // dynamic binding
    std::shared_ptr<Shape> shapes[]{std::make_shared<Ellipse>(1,2,"ellipse1"), std::make_shared<Ellipse>(3,4,"ellipse2")};
    for (auto a : shapes) {
        a->draw();
        // a->func();
    }

    Ellipse ellipse {1,2,"ellipse"};
    // ellipse.draw();
    ellipse.func();

    // slicing
    Shape shape = Ellipse{1,2,"ellipse"};
    shape.draw();
    // shape.func();

    return 0;
}