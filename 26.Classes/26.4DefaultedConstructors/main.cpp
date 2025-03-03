#include <iostream>

const double PI{3.1415926535897932384626433832795};

class Cylinder {
public:
    Cylinder() = default;
    Cylinder(double radius, double height) {
        m_base_radius = radius;
        m_height = height;
    }
    double volume() {
        return PI * m_base_radius * m_base_radius * m_height;
    }

private:
    double m_base_radius{};
    double m_height{};
};

int main(int argc, char** argv) {
    Cylinder cylinder1;
    // Cylinder cylinder1(3.0, 4.0);

    std::cout << "volume is " << cylinder1.volume() << std::endl;
    return 0;
}