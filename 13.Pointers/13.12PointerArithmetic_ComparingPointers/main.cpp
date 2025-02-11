#include <iostream>

int main() {
    int arr[]{ 9,8,7,6,5,4,3,2,1,0 };

    int *p_arr0{&arr[0]}, *p_arr7{arr+7};

    std::cout << "p_arr0 : " << p_arr0 << std::endl;
    std::cout << "p_arr7 : " << p_arr7 << std::endl; 
    std::cout << std::boolalpha;
    std::cout << "p_arr0 <= p_arr7 is " << (p_arr0 <= p_arr7) << std::endl; 
    std::cout << "p_arr0 >= p_arr7 is " << (p_arr0 >= p_arr7) << std::endl; 
    std::cout << "p_arr0 == p_arr7 is " << (p_arr0 == p_arr7) << std::endl; 

    return 0;
}