#include <iostream>
#include "cylinder.h"

int main(int argc, char** argv) {
    Cylinder cylinder1;
    std::cout << "volumn is " << cylinder1.volume() << std::endl;

    Cylinder* p_cylinder1 = new Cylinder(3.0);

    std::cout << "radius is " << (*p_cylinder1).get_base_radius() << std::endl;
    std::cout << "height is " << p_cylinder1->get_height() << std::endl;
    std::cout << "volumn is " << p_cylinder1->volume() << std::endl;
    return 0;
}