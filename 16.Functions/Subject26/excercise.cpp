#include <string>

bool is_palindrome(unsigned long long int num) {
    std::string palindrome_str{std::to_string(num)};
    
    size_t size = palindrome_str.size();
    for(size_t i{}; i < palindrome_str.size(); i++) {
        if (palindrome_str[size-i-1] != palindrome_str[i]) {
            return false;
        }
    }
    return true;
}