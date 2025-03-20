#include "number.h"

Number::Number(int num) :m_int{num} {}

Number& Number::operator+= (const Number& rhs) {
    m_int += rhs.m_int;
    return *this;
}
Number& Number::operator-= (const Number& rhs) {
    m_int -= rhs.m_int;
    return *this;
}
