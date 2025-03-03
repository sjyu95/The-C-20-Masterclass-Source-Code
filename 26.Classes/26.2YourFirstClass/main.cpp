#include <iostream>

const double PI{3.1415926535897932384626433832795};

class Cylinder {
public:
    double base_radius{};
    double height{};

    double volume() {
        return PI * base_radius * base_radius * height;
    }
};

int main(int argc, char** argv) {
    Cylinder cylinder1;

    cylinder1.base_radius = 3;
    cylinder1.height = 2;

    std::cout << "base radius is " << cylinder1.base_radius << std::endl;
    std::cout << "height is " << cylinder1.height << std::endl;
    std::cout << "volume is " << cylinder1.volume() << std::endl;
    return 0;
}