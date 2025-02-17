#include <iostream>

int main() {
    std::string message{"hello world"};
    // const char * const copyed_message{message.c_str()};
    const char * copyed_message{message.c_str()};
    // const std::string & copyed_message{message};
    // std::string & copyed_message{message};
    // std::string copyed_message{message};

    std::cout << "message's address is " << (void *)message.data() << std::endl;
    // std::cout << "copyed_message's address is " << (void *)copyed_message.data() << std::endl;
    std::cout << "copyed_message's address is " << &copyed_message << std::endl;

    copyed_message = "aaa";

    return 0;
}