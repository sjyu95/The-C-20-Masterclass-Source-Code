#ifndef CYLINDER_H
#define CYLINDER_H

#include "constances.h"

class Cylinder {
    public:
        Cylinder() = default;
        Cylinder(double radius, double height);

        double get_base_radius();
        double get_height();
        void set_base_radius(double radius);
        void set_height(double height);
        double volume();
    
    private:
        double m_base_radius{};
        double m_height{};
    };

#endif