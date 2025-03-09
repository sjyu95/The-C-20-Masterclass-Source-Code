#include "cylinder.h"

// double Cylinder::PI{3.1415926535897932384626433832795};

Cylinder::Cylinder(double radius, double height) {
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
    return Cylinder::PI * m_base_radius * m_base_radius * m_height;
}