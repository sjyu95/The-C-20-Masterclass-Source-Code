#include <iostream>

int main(){
    bool valid{false};
    unsigned age{};

    std::cout << "Please type in your age : " << std::endl;
    std::cin >> age;

    if (age <= 20) {
        std::cout << "Sorry, you are tool young for the treetment" << std::endl;
    }
    else if (age >= 40) {
        std::cout << "Sorry, you are tool old for the treetment" << std::endl;
    }
    else {
        std::cout << "You are eligible for the treatment" << std::endl;
    }

    return 0;
}