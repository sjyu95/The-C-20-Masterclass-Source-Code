#include <iostream>

int main() {
    int arr[]{ 1,2,3,4,5,6,7,8,9,0 };
    int *p_arr1{arr + 1}, *p_arr2{arr + 8};
    int *p_arr3{&arr[1]}, *p_arr4{&arr[8]};

    std::cout << "arr[1] : " << *p_arr1 << std::endl;
    std::cout << "arr[1] : " << *p_arr3 << std::endl;
    std::cout << "arr[8] : " << *p_arr2 << std::endl;
    std::cout << "arr[8] : " << *p_arr4 << std::endl;

    std::ptrdiff_t pos_diff{p_arr2 - p_arr1};
    std::ptrdiff_t neg_diff{p_arr1 - p_arr2};

    std::cout << "positive diff is " << pos_diff << std::endl;
    std::cout << "negative diff is " << neg_diff << std::endl;
    std::cout << "sizeof(std::ptrdiff_t) : " << sizeof(std::ptrdiff_t) << std::endl;

    return 0;
}