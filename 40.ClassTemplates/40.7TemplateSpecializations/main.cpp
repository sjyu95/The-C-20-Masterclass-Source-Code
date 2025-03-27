#include <iostream>
#include "adder.h"

int main() {
    Adder<int> adder;
    std::cout << "adder.add(1,2) : " << adder.add(1,2) << std::endl;
    adder.do_something();

    Adder<char*> adder2;
    char str1[]{"hello"};
    char str2[]{" world"};
    // std::cout << R("adder.add("hello"," world") : ") << adder.add("hello"," world") << std::endl;
    auto result = adder2.add(str1, str2);
    std::cout << R"(adder2.add("hello"," world") : )" << result << std::endl;
    // adder2.do_something();

    return 0;
}