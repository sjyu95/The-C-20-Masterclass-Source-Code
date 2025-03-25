#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
public:
    Shape() = default;
    Shape(std::string_view description);

    virtual ~Shape() = default;

    std::string getDescription() const;

    virtual void draw() const;
    virtual void draw(int colorDepth) const;
private:
    std::string m_description;
};

#endif