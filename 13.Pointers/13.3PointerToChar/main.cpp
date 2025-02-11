#include <iostream>

int main() {
    const char * message{ "Hello world!"};

    std::cout << "message : " << message << std::endl;
    std::cout << "*message : " << *message << std::endl;

    char message1[]{"Hello world!"};
    message1[0] = 'J';

    std::cout << "message1 : " << message1 << std::endl;
    std::cout << "*message1 : " << *message1 << std::endl;
    std::cout << "&message : " << &message << std::endl;
    std::cout << "&message1 : " << &message1 << std::endl;

    return 0;
}