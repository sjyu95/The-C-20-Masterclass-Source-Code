#include <iostream>

// template <typename T> const T& maximum(const T& a, const T& b) {
//     std::cout << "Inner &a : " << &a << " &b : " << &b << std::endl;
//     return (a > b) ? a : b;
// }

template <typename T> T maximum(T a,  T b) {
    std::cout << "Inner &a : " << &a << " &b : " << &b << std::endl;
    return (a > b) ? a : b;
}
