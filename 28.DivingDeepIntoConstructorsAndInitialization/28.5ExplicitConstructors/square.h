#ifndef SQUARE_H
#define SQUARE_H

#include <string>

class Square {
public:
    Square() = default;
    explicit Square(double side, std::string_view color="black");

    double surface() const;
private:
    double m_side{};
    std::string m_color;
};

#endif