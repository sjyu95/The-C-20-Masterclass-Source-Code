#include <string>

template <typename T> void swap_data(T &a, T& b) {
    T tmp{};
    tmp = a;
    a = b;
    b = tmp;
}

int main(int argc, char** argv) {
    std::string x{"Hello"};
    std::string y{"There"};
    swap_data(x,y);

    return 0;
}