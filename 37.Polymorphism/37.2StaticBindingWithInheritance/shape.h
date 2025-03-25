#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
public:
    Shape() = default;
    Shape(std::string_view description);

    std::string getDescription() const;

    void draw() const;
private:
    std::string m_description;
};

#endif