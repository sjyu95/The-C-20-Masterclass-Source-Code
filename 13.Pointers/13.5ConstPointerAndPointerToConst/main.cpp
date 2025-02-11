#include <iostream>

int main() {
    int num1{10};
    int * p_num1{&num1 /*reference*/};

    std::cout << "num1 : " << num1 << ", p_num1 : " << p_num1 << ", *p_num1 : " << *p_num1 << std::endl;
    *p_num1 = 100;
    std::cout << "*p_num is changed " << *p_num1 /*de-reference*/ << ", p_num :  " << p_num1 << std::endl;

    int num2{20};
    p_num1 = &num2;
    std::cout << "p_num1 change num1 -> num2(" << num2 << "), current p_num1 : " << p_num1 << ", *p_num1 : " << *p_num1 << std::endl; 

    int num3{30};
    const int * p_num3{&num3};
    std::cout << "num3 : " << num3 << ", p_num3 : " << p_num3 << ", *p_num3 : " << *p_num3 << std::endl;
    // *p_num3 = 100; // compile error
    num3 = 40;
    std::cout << "num3 : " << num3 << ", p_num3 : " << p_num3 << ", *p_num3 : " << *p_num3 << std::endl;

    const int num4{40};
    // int * p_num4{&num4}; // compile error
    const int * p_num4{&num4};

    int num5{50};
    int * const p_num5{&num5};
    // p_num5 = &num4; // compile error

    int num6{60};
    const int * const p_num6{&num6};
    num6 = 70;
    // *p_num6 = 80; // compile error
    // p_num6 = &num5; // compile error

    return 0;
}