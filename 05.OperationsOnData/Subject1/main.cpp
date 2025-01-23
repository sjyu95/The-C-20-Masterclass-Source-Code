#include <iostream>

int main(){
    double celsious{};
    double fahrenheit{};

    std::cout << "Please enter a degree value in Celsius : " << std::endl;
    std::cin >> celsious;

    fahrenheit = (9.0 / 5) * celsious + 32;
    std::cout << celsious << " Celsius is " << fahrenheit << " Fahrenheit" << std::endl;

    return 0;
}