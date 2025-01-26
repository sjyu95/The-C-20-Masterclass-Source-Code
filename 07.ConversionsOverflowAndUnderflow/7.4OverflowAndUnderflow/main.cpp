#include <iostream>

int main() {
    std::cout << std::hex;

    // overflow
    unsigned char data{250};
    for (auto i = 0; i < 7; ++i) {
        ++data;
        std::cout << "incrementing data : " << static_cast<int>(data) << std::endl;
    }

    // underflow
    data = 5;
    for (auto i = 0; i < 7; ++i) {
        --data;
        std::cout << "decrementing data : " << static_cast<int>(data) << std::endl;
    }

    return 0;
}