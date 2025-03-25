#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

class Ellipse : public Shape {
public:
    Ellipse() = default;
    Ellipse(int x, int y, std::string_view description);

    void func() const;
private:
    void draw() const;

    int m_x{};
    int m_y{};
};

#endif