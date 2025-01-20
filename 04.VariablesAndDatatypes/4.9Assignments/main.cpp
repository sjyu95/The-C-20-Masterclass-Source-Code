#include <iostream>

int main(){
    int var1{123};
    std::cout << "var1: " << var1 << std::endl;
    var1 = 456;
    std::cout << "var1: " << var1 << std::endl;

    double var2{321.0};
    std::cout << "var2 : " << var2 << std::endl;
    var2 = 543.0;
    std::cout << "var2 : " << var2 << std::endl;

    bool var3{};
    std::cout << std::boolalpha;
    std::cout << "var3 : " << var3 << std::endl;
    var3 = true;
    std::cout << "var3 : " << var3 << std::endl;

    auto var4{123u};
    std::cout << "var4 : " << var4 << std::endl;
    var4 = -22;
    std::cout << "var4 : " << var4 << std::endl;

    return 0;
}