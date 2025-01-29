#include <iostream>
#include <bitset>

int main() {
    unsigned short val{15};

    std::cout << std::showbase << std::dec << val << std::endl;
    std::cout << std::oct << val << std::endl;
    std::cout << std::hex << val << std::endl;
    std::cout << std::bitset<16>(val) << std::endl;

    return 0;
}