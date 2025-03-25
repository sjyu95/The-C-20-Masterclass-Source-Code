#ifndef CIRCLE_H
#define CIRCLE_H

#include <string_view>
#include "oval.h"

class Circle : public Oval {
public:
    Circle() = default;
    Circle(int radius, std::string_view description);

    void draw() const override;
};

#endif