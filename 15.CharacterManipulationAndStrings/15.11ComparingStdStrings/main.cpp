#include <iostream>

int main() {
    std::string message1{"Hello"};
    const char * message2{"Bello"};
    const char message3[]{"Jello"};

    std::cout << "message1.size() is " << message1.size() << std::endl;
    // std::cout << "message1.size() is " << std::size(message2) << std::endl;
    std::cout << "message3.size() is " << std::size(message3) << std::endl;

    std::cout << "message1 == message3 is " << std::boolalpha << (message1 == message3) << std::endl;
    std::cout << "message1 >= message3 is " << std::boolalpha << (message1 >= message3) << std::endl;
    std::cout << "message1 < message3 is " << std::boolalpha << (message1 < message3) << std::endl;

    const char message4[]{ 'H', 'e', 'l', 'l', 'o' };
    std::cout << "message1 == message4 is " << std::boolalpha << (message1 == message4) << std::endl;

    const char message5[]{ 'H', 'e', 'l', 'l', 'o', '\0' };
    std::cout << "message1 == message4 is " << std::boolalpha << (message1 == message5) << std::endl;

    return 0;
}