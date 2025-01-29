#include <iostream>
#include <iomanip>

void option_v0(bool val, bool val1, bool val2, bool val3, bool val4, bool val5, bool val6, bool val7){
    std::cout << "val is " << val << std::endl;
    std::cout << "val1 is " << val1 << std::endl;
    std::cout << "val2 is " << val2 << std::endl;
    std::cout << "val3 is " << val3 << std::endl;
    std::cout << "val4 is " << val4 << std::endl;
    std::cout << "val5 is " << val5 << std::endl;
    std::cout << "val6 is " << val6 << std::endl;
    std::cout << "val7 is " << val7 << std::endl;
}

void option_v1(unsigned char val){
    std::cout << "val is " << ((val & 0b00000001) >> 0) << std::endl;
    std::cout << "val1 is " << ((val & 0b00000010) >> 1) << std::endl;
    std::cout << "val2 is " << ((val & 0b00000100) >> 2) << std::endl;
    std::cout << "val3 is " << ((val & 0b00001000) >> 3) << std::endl;
    std::cout << "val4 is " << ((val & 0b00010000) >> 4) << std::endl;
    std::cout << "val5 is " << ((val & 0b00100000) >> 5) << std::endl;
    std::cout << "val6 is " << ((val & 0b01000000) >> 6) << std::endl;
    std::cout << "val7 is " << ((val & 0b10000000) >> 7) << std::endl;
}

int main() {

    std::cout << std::setfill('-');
    std::cout << std::setw(20) << "using bool " << std::endl;

    option_v0(true, true, true, true, true, true, true, true);

    std::cout << std::setw(20) << "using bitmask " << std::endl;
    option_v1(0xff);

    return 0;
}