#include <iostream>

int main() {
    // int arr[] = {1,2,3,4,5,6};
    int arr[]{1,2,3,4,5,6};

    for (const auto i : arr) {
        std::cout << i << ", ";
    }

    std::cout << std::endl;
    
    for (const auto i : {1,2,3,4,5,6}){
        std::cout << i << ", ";
    }

    return 0;
}