#include <iostream>

int main() {
    int arr[] = {11,12,13,14,15,16,17,18,19,20};
    int number{10};

    int * p_arr{arr};
    int * p_number{&number};

    std::cout << "sizeof(array) : " << sizeof(arr) << std::endl;  // 40: array size sum
    std::cout << "size(array) : " << std::size(arr) << std::endl; // 10: array count
    std::cout << "sizeof(pointer) : " << sizeof(p_arr) << std::endl; // 4: pointer size
    // std::cout << "size(pointer) : " << std::size(p_arr) << std::endl; // error. std::size() using container

    p_arr = &number;
    //arr = &number; // error

    return 0;
}