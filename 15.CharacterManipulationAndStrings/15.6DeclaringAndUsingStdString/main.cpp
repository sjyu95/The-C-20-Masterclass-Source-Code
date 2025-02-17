#include <iostream>

int main() {
    std::string emptystring;
    std::cout << "empty string : (" << emptystring << ")" << std::endl; 

    std::string name{"Sejung"};
    std::cout << "name is " << name << std::endl;
    name = "Sejung Yoo";
    std::cout << "full name is " << name << std::endl;

    std::string firstname{name, 0, 6};
    std::cout << "first name is " << firstname << std::endl;

    std::string lastname{name, 7, 3};
    std::cout << "family name is " << lastname << std::endl;

    std::string copyedname{name};
    std::cout << "copyed name is " << copyedname << std::endl;
    
    std::string wiredname(5, 'l'); // not initialize
    std::cout << "wired name is " << wiredname << std::endl;

    return 0;
}