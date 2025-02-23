#include <iostream>
#include <optional>

// declairation - prototype
std::optional<int> find_char_v0(std::string_view str, char & ch);
std::optional<bool> find_char_v1(std::string_view str, std::optional<char> ch = std::nullopt);

int main(int argc, char** argv) {
    std::string str{"Hello World~!"};
    char ch{'o'};
    std::optional<char> ch1{'o'};

    std::optional<int> index = find_char_v0(str, ch);
    std::cout << "index is " << index.value() << std::endl;

    std::optional<bool> result = find_char_v1(str, ch1);
    std::cout << "success is " << std::boolalpha << result.value() << std::endl;

    return 0;
}

// definitions
std::optional<int> find_char_v0(std::string_view str, char & ch) {
    for(size_t i{}; i < str.size(); i++) {
        if (str.data()[i] == ch) {
            return i;
        }
    }
    return {};
    // return std::nullopt;
}

std::optional<bool> find_char_v1(std::string_view str, std::optional<char> ch) {
    for(size_t i{}; i < str.size(); i++) {
        if (str.data()[i] == ch.value_or('z')) {
            return true;
        }
    }
    return false;
}