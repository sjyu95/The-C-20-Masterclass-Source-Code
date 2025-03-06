#include <iostream>

struct Component {
    int x;
    int y;
    int z;
};

void printComponent(const Component& c) {
    std::cout << "x : " << c.x << ", y : " << c.y << ", z : " << c.z << std::endl;
}

int main(int argc, char** argv) {
    Component c1{.x=1, .y=2, .z=3};
    printComponent(c1);

    Component c2{.y=1, .z=2};
    printComponent(c2);

    // Component c3{.z=1, .y=0};

    return 0;
}