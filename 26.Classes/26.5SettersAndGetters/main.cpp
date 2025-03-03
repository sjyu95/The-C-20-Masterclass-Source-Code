#include <iostream>

const double PI{3.1415926535897932384626433832795};

class Cylinder {
public:
    Cylinder() = default;
    Cylinder(double radius, double height) {
        m_base_radius = radius;
        m_height = height;
    }
    double get_base_radius() {
        return m_base_radius;
    }
    double get_height() {
        return m_height;
    }
    void set_base_radius(double radius) {
        m_base_radius = radius;
    }
    void set_height(double height) {
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

    cylinder1.set_base_radius(3.0);
    cylinder1.set_height(4.0);

    std::cout << "radius is " << cylinder1.get_base_radius() << std::endl;
    std::cout << "height is " << cylinder1.get_height() << std::endl;
    std::cout << "volumn is " << cylinder1.volume() << std::endl;
    return 0;
}