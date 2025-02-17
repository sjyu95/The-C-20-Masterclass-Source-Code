#include <iostream>

int main() {
    std::string message1{"Hello world"};
    std::string message2;
    std::string message3;

    std::cout << "message1.empty is " << std::boolalpha << message1.empty() << std::endl;
    std::cout << "message2.empty is " << std::boolalpha << message2.empty() << std::endl;
    std::cout << "message3.empty is " << std::boolalpha << message3.empty() << std::endl;

    std::cout << "message1.size is " << message1.size() << std::endl;
    std::cout << "message2.size is " << message2.size() << std::endl;
    std::cout << "message3.size is " << message3.size() << std::endl;

    std::cout << "message1.length is " << message1.length() << std::endl;
    std::cout << "message2.length is " << message2.length() << std::endl;
    std::cout << "message3.length is " << message3.length() << std::endl;

    std::cout << "message1.max_size is " << message1.max_size() << std::endl;
    std::cout << "message2.max_size is " << message2.max_size() << std::endl;
    std::cout << "message3.max_size is " << message3.max_size() << std::endl;

    std::cout << "message1.capacity is " << message1.capacity() << std::endl;
    std::cout << "message2.capacity is " << message2.capacity() << std::endl;
    std::cout << "message3.capacity is " << message3.capacity() << std::endl;

    message1.append(" and it's my world~");
    std::cout << "message1.capacity is " << message1.capacity() << std::endl;
    std::cout << "message1.size is " << message1.size() << std::endl;

    message1.reserve(100);
    std::cout << "message1.capacity is " << message1.capacity() << std::endl;
    std::cout << "message1.size is " << message1.size() << std::endl;

    message1.shrink_to_fit();
    std::cout << "message1.capacity is " << message1.capacity() << std::endl;
    std::cout << "message1.size is " << message1.size() << std::endl;

    return 0;
}