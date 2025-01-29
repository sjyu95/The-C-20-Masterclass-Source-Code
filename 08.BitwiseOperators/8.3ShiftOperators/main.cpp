#include <iostream>
#include <bitset>
#include <typeinfo>

int main() {
    unsigned short int value{0xff0u};

    std::cout << std::showbase;
    std::cout << std::bitset<16>(value) << std::hex << ", value(hex) : " << value << std::dec << ", value(dec): " << value << ", sizeof : " << sizeof(value) << std::endl;

    auto tmp1 = value << 1;
    std::cout << std::bitset<16>(tmp1) << std::hex << ", value(hex) : " << tmp1 << std::dec << ", value(dec): " << tmp1 << ", sizeof : " << sizeof(tmp1) << std::endl;
    std::cout << "type (deduction to int) : " << typeid(tmp1).name() << std::endl;

    for (auto i = 0; i < 5; ++i) {
        value = static_cast<unsigned short int>(value << 1);
        std::cout << std::bitset<16>(value) << std::hex << ", value(hex) : " << value << std::dec << ", value(dec): " << value << ", sizeof : " << sizeof(value) << std::endl;
        std::cout << "type : " << typeid(value).name() << std::endl;
    }

    for (auto i = 0; i < 5; ++i) {
        value = static_cast<unsigned short int>(value >> 1);
        std::cout << std::bitset<16>(value) << std::hex << ", value(hex) : " << value << std::dec << ", value(dec): " << value << ", sizeof : " << sizeof(value) << std::endl;
        std::cout << "type : " << typeid(value).name() << std::endl;
    }

    return 0;
}