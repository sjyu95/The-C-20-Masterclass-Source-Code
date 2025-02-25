#include <iostream>

inline int max(int a, int b) {
    return (a > b) ? a : b;
}

int main(int argc, char** argv) {

    std::cout << "max is " << max(1,2) << std::endl;

    return 0;
}