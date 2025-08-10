#include <iostream>
#include "decrypt.h"
#include "encrypt.h"

char encrypt(const char& ch) {
    return static_cast<char>(ch + 3);
}

char decrypt(const char& ch) {
    return static_cast<char>(ch - 3);
}

// using str_modifier = char(*)(const char&);

template <typename str_modifier>
std::string& modify(std::string& src_param, str_modifier modifier) {
    for (size_t i{}; i < src_param.size(); ++i) {
        src_param[i] = modifier(src_param[i]);
    }
    return src_param;
}

int main() {
    Encrypt enc_functor;
    Decrypt dec_functor;
    std::cout << "using functor" << std::endl;
    std::cout << "encrypt " << enc_functor('A') << " to decrypt " << dec_functor(enc_functor('A')) << std::endl;

    std::cout << "using modifier callback" << std::endl;
    std::string src_param{"A"};
    std::cout << "encrypt " << modify(src_param, encrypt) << " to decrypt " << modify(src_param, decrypt) << std::endl;

    std::cout << "using modifier by functor -- template function" << std::endl;
    src_param = "A";
    std::cout << "encrypt " << modify(src_param, enc_functor) << " to decrypt " << modify(src_param, dec_functor) << std::endl;

    return 0;
}