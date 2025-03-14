#include <iostream>
#include "point.h"
#include "Line.h"
#include "cylinder.h"

int main(int argc, char** argv) {
    Geom::Point p1(1,2), p2(3,4);

    Geom::Line line(p1, p2);
    line.printInfo();

    Geom::Cylinder cyliner{1,2};
    std::cout << "cylinder.volume : " << cyliner.volume() << std::endl;

    return 0;
}