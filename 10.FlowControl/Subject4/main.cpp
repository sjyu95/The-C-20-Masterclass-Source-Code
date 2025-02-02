#include <iostream>

int main(){
    int value{0};

    std::cout << "Please type in an integral value :" << std::endl;
    std::cin >> value;

    if (value % 2 == 0) {
        std::cout << value << " is even" << std::endl;
    }
    else {
        std::cout << value << " is odd" << std::endl; 
    }

    return 0;
}