#include <iostream>

constinit int s_val{3};
const constinit int s_val_immutable{4};

int main(){
    int a{1};
    const int val1{a}; // runtime value initialize
    std::cout << "const int val is " << a << std::endl;

    // const + compiletime initialize
    constexpr int val2{1};
    std::cout << "constexpr int is " << val2 << std::endl;
    
    // constinit is compiletime initialize and mutable
    s_val = 4;
    std::cout << "constint is " << s_val << std::endl;

    // const constinit is const + compiletime initialize
    std::cout << "const constinit is " << s_val_immutable << std::endl;

    return 0;
}