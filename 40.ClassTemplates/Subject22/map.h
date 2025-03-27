#ifndef MAP_H
#define MAP_H

#include <concepts>
#include <ostream>
#include <string>

// template <std::integral T, std::same_as<std::string> P>
template <typename T, typename P>
requires std::is_integral_v<T> && std::is_same_v<P, std::string>
struct Map
{
private :
    friend std::ostream& operator<< <>  (std::ostream& out, const Map<T,P>& operand);
    T m_key;
    P m_value;
public :
    Map(T key, P value)
     : m_key(key), m_value(value)
    {}
};


// template <std::integral T, std::same_as<std::string> P>
template <typename T, typename P>
requires std::is_integral_v<T> && std::is_same_v<P, std::string>
 std::ostream& operator<<(std::ostream& out, const Map<T,P>& operand){

    out << "Map : [" << operand.m_key
        << "," << operand.m_value << "]";
    return out;
}

#endif