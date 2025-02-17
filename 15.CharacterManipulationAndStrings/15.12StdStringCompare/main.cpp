#include <iostream>

int main() {
    std::string message1{"Hello"};
    std::string message2{"World"};
    const char * message3{"hello"};

    std::cout << "message1 < message2 is " << message1.compare(message2) << std::endl; 
    std::cout << "message1 < message3 is " << message1.compare(message3) << std::endl;

    std::string message4{"Hello World"};
    std::cout << "message2 == message4's world is " << message4.compare(6,5, message2) << std::endl;
    std::cout << "message1 == message4's world is " << message4.compare(6,5, message1) << std::endl;

    return 0;
}