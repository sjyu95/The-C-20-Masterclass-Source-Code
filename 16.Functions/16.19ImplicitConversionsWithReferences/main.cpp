#include <iostream>

// declairation : prototype
void increment(int& num);
void print_out(const int& num);

int main() {
    // int num{3};
    double num{3.0};

    print_out(num);
    // increment(num);
    print_out(num);

    return 0;
}

// definitions
void increment(int& num) {
    ++num;
}
void print_out(const int& num) {
    std::cout << "incremented num is " << num << std::endl;
}
