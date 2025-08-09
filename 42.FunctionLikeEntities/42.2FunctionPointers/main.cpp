#include <iostream>

double add (double a, double b) {
    return a + b;
}

int main(int argc, char**argv) {
    // double (*f_ptr)(double, double) = add;
    // double (*f_ptr)(double, double) = &add;
    // double (*f_ptr)(double, double) {add};
    double (*f_ptr)(double, double) {&add};
    // double (*f_ptr)(double, double) = nullptr; // crash!!

    std::cout << "(a+b) = " << f_ptr(1,3) << std::endl;


    return 0;
}