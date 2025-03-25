#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
public:
    Shape() = default;
    Shape(std::string_view description);

    virtual ~Shape() = default;

    std::string getDescription() const;

    virtual double perimeter() const = 0;
    virtual double surface() const = 0;

private:
    std::string m_description;
};

#endif