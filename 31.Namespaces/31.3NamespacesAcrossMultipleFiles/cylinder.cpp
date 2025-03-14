#include "cylinder.h"

namespace Geom {
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
        return PI * m_base_radius * m_base_radius * m_height;
    }
}