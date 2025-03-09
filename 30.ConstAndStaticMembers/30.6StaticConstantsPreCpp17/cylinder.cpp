#include "cylinder.h"

const float Cylinder::FLOAT_CONSTANT{10.1f};
const double Cylinder::DOUBLE_CONSTANT{1.1};
const int Cylinder::INT_ARRAY_CONSTANT[]{1,2,3};
const std::string Cylinder::STRING_CONSTANT{"test"};

const double Cylinder::PI{3.1415926535897932384626433832795};

Cylinder::Cylinder(double radius, double height)
: WEIRED_INT_CONSTANT(1) {
    m_base_radius = radius;
    m_height = height;
}

double Cylinder::get_base_radius() {
    return m_base_radius;
}

double Cylinder::get_height() {
    return m_height;
}

void Cylinder::set_base_radius(double radius) {
    m_base_radius = radius;
}

void Cylinder::set_height(double height) {
    m_height = height;
}

double Cylinder::volume() {
    return PI * m_base_radius * m_base_radius * m_height;
}