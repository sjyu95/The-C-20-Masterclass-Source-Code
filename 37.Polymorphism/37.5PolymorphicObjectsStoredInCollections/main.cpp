#include <memory>
#include "circle.h"
#include "oval.h"
#include "shape.h"

int main(int argc, char** argv) {

    Shape shape1 = Shape{"shape1"};
    Shape shape2 = Shape{"shape2"};
    Oval oval1 = Oval{1,2,"oval1"};
    Oval oval2 = Oval{3,4,"oval2"};
    Circle circle1 = Circle{11, "circle1"};
    Circle circle2 = Circle{12, "circle2"};

    Shape shape[]{shape1, shape2, oval1, oval2, circle1, circle2};
    for (size_t i{}; i < std::size(shape); i++) {
        shape[i].draw();
    }

    // const Shape& rshape[]{shape1, shape2, oval1, oval2, circle1, circle2};

    const Shape* pShape[]{&shape1, &shape2, &oval1, &oval2, &circle1, &circle2};
    for (auto s : pShape) {
        s->draw();
    }

    std::shared_ptr<Shape> pShape2[]{ std::make_shared<Circle>(1,"circle"), std::make_shared<Oval>(1,2,"oval") };
    for (auto a : pShape2) {
        a->draw();
    }
    return 0;
}