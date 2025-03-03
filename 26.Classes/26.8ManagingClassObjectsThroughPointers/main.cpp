#include <iostream>
#include "cylinder.h"

int main(int argc, char** argv) {
    Cylinder cylinder1;
    // Cylinder cylinder1(3.0, 4.0);

    // Cylinder* p_cylinder1 = new Cylinder;    
    // p_cylinder1->set_base_radius(3.0);
    // p_cylinder1->set_height(4.0);

    Cylinder* p_cylinder1 = new Cylinder(3.0, 4.0);

    std::cout << "radius is " << (*p_cylinder1).get_base_radius() << std::endl;
    std::cout << "height is " << p_cylinder1->get_height() << std::endl;
    std::cout << "volumn is " << p_cylinder1->volume() << std::endl;
    return 0;
}