#ifndef NUMBER_H
#define NUMBER_H

#include <ostream>

class Number {
    friend std::ostream& operator<< (std::ostream& os, const Number& num);
    friend Number operator+ (const Number& lhs, const Number& rhs);
    friend Number operator- (const Number& lhs, const Number& rhs);
public:
    Number() = default;
    Number(int num);

    Number& operator+= (const Number& rhs);
    Number& operator-= (const Number& rhs);

    // Number operator+ (const Number& rhs) const {
    //     return Number{m_int + rhs.m_int};
    // }

    explicit operator double() const {
        return static_cast<double>(m_int);
    }

private:
    int m_int{};
};

inline std::ostream& operator<< (std::ostream& os, const Number& num) {
    os << "Num : " << num.m_int;
    return os;
}

inline Number operator+ (const Number& lhs, const Number& rhs) {
    return Number{lhs.m_int + rhs.m_int};
}

inline Number operator- (const Number& lhs, const Number& rhs) {
    return Number{lhs.m_int - rhs.m_int};
}
#endif