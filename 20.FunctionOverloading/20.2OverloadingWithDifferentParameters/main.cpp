#include <iostream>

// function declairation - prototype
int max(int a, int b);
double max(double a, double b);
std::string_view max(std::string_view a, std::string_view b);

int main(int argc, char** argv) {
    int x{1}, y{2};
    double a{3.0}, b{4.0};
    // std::string_view s{"hello"}, t{"world"};

    max(a,b);
    max(x,y);
    max("hello","world");

    return 0;
}

// definition
int max(int a, int b) {
    std::cout << "call max of int" << std::endl;
    return (a > b) ? a : b;
}

double max(double a, double b) {
    std::cout << "call max of double" << std::endl;
    return (a > b) ? a : b;
}

std::string_view max(std::string_view a, std::string_view b) {
    std::cout << "call max of string" << std::endl;
    return (a > b) ? a : b;
}
