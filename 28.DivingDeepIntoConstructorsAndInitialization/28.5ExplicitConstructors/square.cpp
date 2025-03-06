#include "square.h"

Square::Square(double side, std::string_view color)
: m_side{side}
, m_color{color} {
}

double Square::surface() const {
    return m_side * m_side;
}