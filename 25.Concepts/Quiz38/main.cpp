#include <string>
#include <concepts>

template <typename T>
T add_up(T a, T b) requires (std::integral<T> || std::floating_point<T>) {
    return a + b;
}

template <typename T>
T add_up2(T a, T b) requires (std::convertible_to<T, double>) {
    return a + b;
}

int main(int argc, char** argv) {
    // std::string a{"test"}, b{" mind"};
    // add_up(a,b);    
    int a{1}, b{2};
    add_up2(a,b);    

    return 0;
}