#include <iostream>

unsigned int factorial(unsigned int n);

int main(int argc, char** argv) {
    std::cout << "result is " << factorial(10) << std::endl;
}

unsigned int factorial(unsigned int n) {
    if (n > 1) {
        return n * factorial(n-1);
    }
    return 1; // !0 = 1
}