#include <iostream>

int& max(int& a, int& b);
const int& max(const int& a, const int& b);
// const int& max(const int& const a, const int& const b);

int main(int argc, char** argv) {
    int a{2}, b{1};
    const int & c{a}, &d{b};

    std::cout << "address a(" << &a << ") b(" << &b << std::endl;
    std::cout << "address c(" << &c << ") d(" << &d << std::endl;

    max(a, b);
    max(c, d);

    return 0;
}

int& max(int& a, int& b){
    a++;
    std::cout << "int reference address a(" << &a << ") b(" << &b << std::endl;
    return (a > b) ? a : b; 
}

const int& max(const int& a, const int& b){
    // a++;
    std::cout << "const int reference address a(" << &a << ") b(" << &b << std::endl;
    return (a > b) ? a : b; 
}
