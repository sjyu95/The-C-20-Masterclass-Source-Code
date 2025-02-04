#include <iostream>

int main() {
    int arr[]{1,2,3,4,5};

    for (auto multiplier1{4.0}, multiplier2{1.0}; const auto i : arr) {
        std::cout << i << " * " << multiplier1 << " = " << i * multiplier1 << std::endl; 
        std::cout << i << " * " << multiplier2 << " = " << i * multiplier2 << std::endl; 
    }

    return 0;
}