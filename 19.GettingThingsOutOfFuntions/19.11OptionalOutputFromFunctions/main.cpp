#include <iostream>

// declairation - prototype
int find_char_v0(std::string_view str, char & ch);
void find_char_v1(std::string_view str, char & ch, bool& success);

int main(int argc, char** argv) {
    std::string str{"Hello World~!"};
    char ch{'o'};

    int index = find_char_v0(str, ch);
    std::cout << "index is " << index << std::endl;

    bool success{};
    find_char_v1(str, ch, success);
    std::cout << "success is " << std::boolalpha << success << std::endl;

    return 0;
}

// definitions
int find_char_v0(std::string_view str, char & ch) {
    for(size_t i{}; i < str.size(); i++) {
        if (str.data()[i] == ch) {
            return i;
        }
    }
    return -1;
}

void find_char_v1(std::string_view str, char & ch, bool& success) {
    success = false;
    for(size_t i{}; i < str.size(); i++) {
        if (str.data()[i] == ch) {
            success = true;
        }
    }
}