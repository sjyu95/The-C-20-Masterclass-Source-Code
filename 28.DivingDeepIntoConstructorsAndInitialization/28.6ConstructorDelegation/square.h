#ifndef SQUARE_H
#define SQUARE_H

#include <string>

class Square {
public:
    Square(double side);
    Square(double side, std::string_view color);
    ~Square();

    double surface() const;
private:
    double m_side{};
    std::string m_color;
    double m_point;
};

#endif