#include <iostream>

int main() {
    // dangling pointer case 1. non initialize
    int * p_number1;
    // std::cout << *p_number1 << std::endl; // crash!
    std::cout << "p_number1 : " << p_number1 << std::endl;
    std::cout << "&p_number1 : " << &p_number1 << std::endl;

    p_number1 = new int{1};
    std::cout << "p_number1 : " << p_number1 << ", *p_number1 : " << *p_number1 << std::endl;

    // dangling pointer case 2. access deleted pointer
    delete p_number1;
    p_number1 = nullptr;
    if (p_number1) {
        std::cout << "p_number1 : " << p_number1 << ", *p_number1 : " << *p_number1 << std::endl;
    } else {
        std::cout << "p_number1 is nullptr." << std::endl;
    }

    // dangling pointer case 3. multiple pointers
    int * p_number2{ new int{2} };
    int * p_number3{p_number2};

    delete p_number2;
    std::cout << "p_number3 : " << p_number3 << std::endl;
    std::cout << "*p_number3 : " << *p_number3 << std::endl; // crash!

    delete p_number3;

    std::cout << "Bye!" << std::endl;
    
    return 0;
}