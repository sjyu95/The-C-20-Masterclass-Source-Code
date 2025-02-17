#include <iostream>

int main() {
    std::string message{R"(Introductions:
        My name is Sejung.
        I'm from South Korea.
    )"};
    message.append(R"(
        C:\TOOLS\MinGW)");
    message.append(R"(
        \noctal 65: \101, \\101
    )");
    message.append(R"(
        hex 65: \x41, \\x41
    )");

    std::cout << message << std::endl;

    std::string message2 = R"---(R"(C:\TOOLS\MinGW)")---";
    std::cout << message2 << std::endl;

    std::string jsonstr{
        R"json(
            {"key" : "value"}
        )json" 
    };
    std::cout << jsonstr << std::endl;

    // std::string message3 {R"(He said :  R"(Stay out of this)" and left)"};
    std::string message3 {R"(He said :  ("Stay out of this") and left)"};
    std::cout << "message3 : " << message3 << std::endl;

    // std::string message4 {R"(He said :  )"Stay out of this"( and left)"};
    std::string message4 {R"*(He said :  )"Stay out of this"( and left)*"};
    std::cout << "message4 : " << message4 << std::endl;

    return 0;
}