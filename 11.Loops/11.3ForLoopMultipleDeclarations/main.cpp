#include <iostream>

int main() {
    constexpr size_t COUNT{10};

    for (size_t i{0}, x{0}, y{10}, z{100}; i < COUNT; ++i, ++x, y+=1, z-=10) {
        std::cout << "x : " << x << ", y : " << y << ", z : " << z << std::endl;
    }

    return 0;
}