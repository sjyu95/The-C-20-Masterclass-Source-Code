#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
public:
    Shape() = default;
    Shape(std::string_view description);
    virtual ~Shape() = default;

    void draw() const;

private:
    void func() const;
    std::string m_description;
};

#endif