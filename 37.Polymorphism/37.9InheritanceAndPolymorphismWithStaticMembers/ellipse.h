#ifndef ELLIPSE_H
#define ELLIPSE_H

#include <string_view>
#include "shape.h"

class Ellipse : public Shape {
public:
    Ellipse() = default;
    Ellipse(int x, int y, std::string_view description);

    void draw() const override;
    int getCount() const override;

    inline static int mCount{};
private:
    int m_x{};
    int m_y{};
};

#endif