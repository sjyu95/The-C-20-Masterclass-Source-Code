#ifndef MAP_H
#define MAP

#include <string>
#include <type_traits>

template <typename T, typename P>
struct Map
{
    static_assert(std::is_integral_v<T>,"Keys can only be of integral type");
    static_assert(std::is_same_v<P, std::string>,"Values can only be of std::string type");
private :

    T m_key;
    P m_value;
public :
    Map(T key, P value)
     : m_key(key), m_value(value)
    {}
};

#endif