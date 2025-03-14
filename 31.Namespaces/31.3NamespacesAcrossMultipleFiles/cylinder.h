#ifndef CYLINDER_H
#define CYLINDER_H

namespace Geom {
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
            inline static double PI{3.1415926535897932384626433832795};

            double m_base_radius{};
            double m_height{};
    };
}

#endif