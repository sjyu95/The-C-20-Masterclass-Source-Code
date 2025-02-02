#include <iostream>

int main(){
    int x{}, y{};

    std::cout << "Welcome to territory control. Please type in your x and y positions" << std::endl;
    std::cout << "Type in your x location : " << std::endl;
    std::cin >> x;
    std::cout << "Type in your y location : " << std::endl;
    std::cin >> y;

    if ((x > -20 && x < 20) && (y > -10 && y < 10)) {
        std::cout << "You are completely surounded. Don't move!" << std::endl;
    }
    else {
        std::cout << "You're out of reach!" << std::endl;
    }

    return 0;
}