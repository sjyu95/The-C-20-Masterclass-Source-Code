#include <iostream>
#include <concepts>

template <typename T>
concept Number = std::integral<T> || std::floating_point<T> || std::convertible_to<T, double>;

template <Number T = int , unsigned int size = 2>
class Point{
    friend std::ostream& operator<< <> (std::ostream&, const Point<T,size>&);
    T m_components[size];
public :
    Point() = default;
    unsigned int get_size() const{
        return size;
    }
    void set_value(unsigned int index, T value){
        m_components[index] = value;
    }
};


template < typename T, unsigned int size>
std::ostream& operator<<(std::ostream& out, const Point<T,size>& operand){

    out << "Point : [ dimension :  " << size
        <<  ", components : " ;
    for(size_t i{0}; i < size; ++i){
        out << operand.m_components[i] << " " ;
    }
    out << "]";

    return out;
}

class TinyType
{
    public :
        TinyType() = default;
        TinyType( int value) : m_wrapped_int(value){}

        operator double() const {
            return static_cast<double>(m_wrapped_int);
        }
    private :
    int m_wrapped_int{};
};


int main()
{
    Point<TinyType,3> point_3d_tiny_types;
    point_3d_tiny_types.set_value(0,TinyType(10));
    point_3d_tiny_types.set_value(1,TinyType(20));
    point_3d_tiny_types.set_value(2,TinyType(30));
    std::cout << point_3d_tiny_types << std::endl;

    return 0;
}