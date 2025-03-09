#ifndef CYLINDER_H
#define CYLINDER_H

#include <string>

class Cylinder {
    public:
        // Cylinder() = default;
        Cylinder(double radius, double height);

        // primitive type static const variables - initialization
        static const int STATIC_INT_VAR{0};
        enum Color{ RED, BLUE, GREEN };
        static const Color STATIC_COLOR{RED};
        static const char STATIC_CHAR_VAR{'c'};

        // non primitive type static variable - impossible initialization here
        static const float FLOAT_CONSTANT;
        static const double DOUBLE_CONSTANT;
        static const int INT_ARRAY_CONSTANT[];
        static const std::string STRING_CONSTANT;

        // const variable - use initialize list
        const int WEIRED_INT_CONSTANT;

        double get_base_radius();
        double get_height();
        void set_base_radius(double radius);
        void set_height(double height);
        double volume();

    private:
        double m_base_radius{};
        double m_height{};

        static const double PI;
    };

#endif