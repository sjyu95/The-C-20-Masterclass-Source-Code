#ifndef POINT_H
#define POINT_H

#include <ostream>

template <typename T = int , unsigned int size = 2>
class Point{
    template <typename T, unsigned int U>
    friend std::ostream& operator<< (std::ostream& os, const Point<T, U>& point);
    T m_components[size];
public :
    unsigned int get_size() const{
        return size;
    }
    void set_value(unsigned int index, T value){
        m_components[index] = value;
    }
};

template <typename T, unsigned int size = 2>
inline std::ostream& operator<< (std::ostream& os, const Point<T, size>& point) {
    os << "Point : [ dimension :  " << point.get_size() << ", components : ";
    for (size_t i{}; i < point.get_size(); i++) {
        os << point.m_components[i] << " ";
    }
    os << "]";
    return os;
}

#endif