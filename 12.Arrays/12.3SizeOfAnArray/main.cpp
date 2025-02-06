#include <iostream>

int main() {
    int arr[]{1,2,3,4,5};

    std::cout << "if cpp17, array size is " << std::size(arr) << std::endl;
    std::cout << "array size is " << sizeof(arr)/sizeof(arr[0]) << std::endl;

    return 0;
}