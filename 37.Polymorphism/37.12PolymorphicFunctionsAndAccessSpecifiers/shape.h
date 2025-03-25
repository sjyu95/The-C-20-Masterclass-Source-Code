#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
public:
    Shape() = default;
    Shape(std::string_view description);
    virtual ~Shape() = default;

    virtual void draw() const;

private:
    virtual void func() const;
    std::string m_description;
};

#endif