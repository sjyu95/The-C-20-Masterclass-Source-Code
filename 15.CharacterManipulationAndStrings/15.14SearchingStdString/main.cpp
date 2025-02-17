#include <iostream>

int main() {
    std::string message{"Water was poured in the heater"};
    std::string find_str{"ter"};

    for (size_t i{}; i < message.size(); i++) {
        i = message.find(find_str, i);
        if (i == std::string::npos) {
            break;
        } else {
            std::cout << find_str << "'s index is " << i << std::endl;
        }
    }

    find_str.replace(0, 3, "aaa");
    if (message.find(find_str) == std::string::npos) {
        std::cout << find_str << " can not found. index is " << std::string::npos << std::endl;
        std::cout << "size_t -1 is " << size_t(-1) << std::endl;
    }

    return 0;
}