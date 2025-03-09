#ifndef CYLINDER_H
#define CYLINDER_H

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

        inline static constexpr double PI{3.1415926535897932384626433832795};
        // static double PI;
    };

#endif