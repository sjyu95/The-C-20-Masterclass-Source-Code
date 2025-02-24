#include <iostream>

int * max(int* a, int* b);
// const int * max(const int* a, const int* b);
const int * max(const int* const a, const int* const b);

int main(int argc, char** argv) {
    int a{1}, b{2};
    int * p_a{&a}, *p_b{&b};

    max(p_a, p_b);

    const int * p_ca{&a}, *p_cb{&b};
    std::cout << "const int* address a(" << &a << ") b(" << &b << ")" << std::endl;
    max(p_ca, p_cb);

    return 0;
}

int * max(int* a, int* b) {
    return (*a > *b) ? a : b;
}

// const int * max(const int* a, const int* b) {
//     return (*a > *b) ? a : b;
// }

const int * max(const int* const a, const int* const b) {
    std::cout << "const int* const address a(" << &a << ") b(" << &b << ")" << std::endl;
    return (*a > *b) ? a : b;
}