#include <iostream>
#include <string>

int main() {
    std::cout << "Where do you live?" << std::endl;
    std::cout << "User types : ";

    std::string country{};
    std::cin >> country;
    
    std::cout << "Program prints : I've heard great things about " << country << ". I'd like to go sometime." << std::endl;
    
    return 0;
}