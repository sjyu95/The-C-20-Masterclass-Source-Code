#include <iostream>
// #include <cctype>

int main() {
    char messages[]{ "My birthday is on december, 27. ^*^~"};

    size_t blank_count{}, upper_count{}, lower_count{}, alhpa_count{}, num_count{};

    for (size_t i{}; i < std::size(messages); i++) {
        if (std::isalpha(messages[i]))
            alhpa_count++;
        if (std::isdigit(messages[i]))
            num_count++;
        if (std::islower(messages[i]))
            lower_count++;
        if (std::isupper(messages[i]))
            upper_count++;
        if (std::isblank(messages[i]))
            blank_count++;
    }

    std::cout << "alpha count is " << alhpa_count << std::endl;
    std::cout << "num count is " << num_count << std::endl;
    std::cout << "lower count is " << lower_count << std::endl;
    std::cout << "upper count is " << upper_count << std::endl;
    std::cout << "space count is " << blank_count << std::endl;

    char * p_upper_messages = new(std::nothrow) char[std::size(messages)]{};

    for (size_t i{}; i < std::size(messages); i++) {
        *(p_upper_messages + i) = std::toupper(messages[i]);
    }
    std::cout << "upper message is " << p_upper_messages << std::endl;
    std::cout << "upper message'adddress is " << &p_upper_messages << std::endl;

    delete p_upper_messages;

    return 0;
}