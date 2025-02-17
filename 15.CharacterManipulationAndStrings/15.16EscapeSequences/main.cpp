#include <iostream>

int main() {
    std::string message{"Introductions:\n\tMy name is Sejung.\n\tI'm from South Korea.\n"};
    message.append("C:\\TOOLS\\MinGW");
    message.append("\noctal 65: \101, \\101");
    message.append("\nhex 65: \x41, \\x41");

    std::cout << message << std::endl;

    return 0;
}