#include <iostream>

int main() {
    std::string message{"Hello world~!"};

    for (size_t i{}; i < message.size(); i++) {
        std::cout << message[i] << " ";
    }
    std::cout << std::endl;
    for (size_t i{}; i < message.size(); i++) {
        std::cout << message.at(i) << " ";
    }
    std::cout << std::endl;
    for (char a : message) {
        std::cout << a << ' ';
    }
    std::cout << std::endl;

    std::cout << "front : " << message.front() << std::endl;
    std::cout << "back : " << message.back() << std::endl;

    const char front {message.front()};
    const char back {message.back()};
    std::cout << "front : " << front << std::endl;
    std::cout << "back : " << back << std::endl;

    char & frontref {message.front()};
    char & backref {message.back()};

    frontref = 'A', backref = 'B';
    std::cout << message << std::endl;

    const char * message_cstr {message.c_str()};
    std::cout << message_cstr << std::endl;

    char * message_data{message.data()};
    message_data[0] = 'H';
    message_data[message.size()-1] = '!';
    std::cout << message_data << std::endl;

    return 0;
}