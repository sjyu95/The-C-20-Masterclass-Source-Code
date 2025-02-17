#include <iostream>

int main() {
    std::string message1{"Hello world!"};

    message1.clear();
    std::cout << "message1.size() is " << message1.size() << std::endl;
    std::cout << "message1.capacity() is " << message1.capacity() << std::endl;
    
    message1.append("It's my world!");
    message1.insert(1,1,'2');
    std::cout << message1 << std::endl;

    message1.erase(1,1);
    std::cout << message1 << std::endl;

    message1.insert(7," new");
    std::cout << message1 << std::endl;

    std::string message2{"Sejung's world"};
    message1.insert(5, message2, 0, 9);
    std::cout << message1 << std::endl;
    
    message1.push_back('!');
    std::cout << message1 << std::endl;

    message1.pop_back();
    std::cout << message1 << std::endl;

    return 0;
}