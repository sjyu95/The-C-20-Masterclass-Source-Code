#include <iostream>

int main() {
    int int_data{33};
    double double_data{33.3};

    int & ref_int{int_data};
    double & ref_double{double_data};

    int_data = 44;
    double_data = 44.4;

    std::cout << "ref_int : " << ref_int << std::endl;
    std::cout << "&ref_int : " << &ref_int << std::endl;
    std::cout << "&int_data : " << &int_data << std::endl;
    std::cout << "ref_double : " << ref_double << std::endl;
    std::cout << "&ref_double : " << &ref_double << std::endl;
    std::cout << "&double_data : " << &double_data << std::endl;

    return 0;
}