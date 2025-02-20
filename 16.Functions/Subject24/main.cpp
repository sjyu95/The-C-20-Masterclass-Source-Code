#include <iostream>
#include <string>

unsigned int digit_sum(unsigned int digit) {
    unsigned int sum{};
    
    unsigned quotient = digit / 10;
    unsigned remainder = digit % 10;
    sum += remainder;

    for (; quotient > 0;) {
        unsigned remainder = quotient % 10;
        sum += remainder;
        quotient = quotient / 10;
    }

    return sum;
}

unsigned int digit_sum_2(unsigned int digit) {
    unsigned int sum{};

    std::string a{std::to_string(digit)};
    for (char c : a) {
        sum += c - '0';
    }
    return sum;
}

int main() {
    std::cout << "sum is " << digit_sum(79) << std::endl;
    std::cout << "sum is " << digit_sum_2(79) << std::endl;

    return 0;
}