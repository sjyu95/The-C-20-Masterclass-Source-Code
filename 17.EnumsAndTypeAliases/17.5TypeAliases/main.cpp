#include <iostream>

int main() {
    using HugeInt = unsigned long long int;
    HugeInt number{12345678};

    std::cout << "huge number is " << number << std::endl;
    std::cout << "sizeof(HugeInt) is " << sizeof(HugeInt) << std::endl;

    typedef unsigned long long int HugeIntOldType;
    HugeIntOldType number2{123456};
 
    std::cout << "huge number of old type is " << number << std::endl;
    std::cout << "sizeof(HugeIntOldType) is " << sizeof(HugeIntOldType) << std::endl;

    return 0;
}