#include <iostream>

int main() {
    unsigned char val1{125u};
    std::cout << "unsigned char literal 255u : " << val1 << std::endl;

    int val2{1};
    short int val3{2};
    unsigned short val4{3u};
    long val5{1000L};
    long long val6{100000LL};
    unsigned long long val7{1000000ULL};

    std::cout << "int 1 : " << val2 << std::endl;
    std::cout << "short 2 : " << val3 << std::endl;
    std::cout << "unsigned short literal 3u : " << val4 << std::endl;
    std::cout << "long literal 1000L : " << val5 << std::endl;
    std::cout << "long long literal 100000LL : " << val6 << std::endl;
    std::cout << "unsigned long long 1000000LL : " << val7 << std::endl;

    int price{1'000'000u};
    std::cout << "price literal is " << price << std::endl;

    int bin{0b11110000};
    int oct{055u};
    int hex{0xffu};

    std::cout << "binary literal is " << bin << std::endl;
    std::cout << std::oct << "octal literal is " << oct << std::endl;
    std::cout << std::hex << "hex literal is " << hex << std::endl;
    std::cout << std::dec << "decimal literal is " << hex << std::endl;

    int intvar{5};
    float floatvar{5.5f};
    double doublevar{5.5};
    long double longdoublevar{5.5l};

    std::cout << "float literal is " << floatvar << std::endl;
    std::cout << "double literal is " << doublevar << std::endl;
    std::cout << "long double literanl is " << longdoublevar << std::endl;

    return 0;
}