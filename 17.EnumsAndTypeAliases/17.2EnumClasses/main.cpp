#include <iostream>

enum class Month /*: unsigned char */ {
    Jan = 1, January = Jan, Feb, Mar, Apr, May, Jun, Jul = 2'000'000'000, Aug, Sep, Oct, Nov, Dec
};

int main() {
    Month month{Month::Jul};
    // std::cout << "month is " << month << std::endl;
    // std::cout << "month is " << static_cast<unsigned char>(month) << std::endl;
    std::cout << "month is " << static_cast<int>(month) << std::endl;
    std::cout << "sizeof(month) is " << sizeof(month) << std::endl;

    return 0;
}