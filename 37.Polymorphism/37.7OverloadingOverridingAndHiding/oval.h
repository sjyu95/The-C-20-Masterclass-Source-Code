#ifndef OVAL_H
#define OVAL_H

#include "shape.h"
#include <string_view>

class Oval : public Shape {
public:
    Oval() = default;
    Oval(int x, int y, std::string_view description);

    int getX() const;
    int getY() const;

    void draw() const override;
private:
    int m_x_radius{};
    int m_y_radius{};
};

#endif