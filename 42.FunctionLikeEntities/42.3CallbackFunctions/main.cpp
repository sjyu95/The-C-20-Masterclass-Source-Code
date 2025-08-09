#include <iostream>
#include <string>
#include "boxcontainer.h"

char encrypt(const char& src){
    char enc = static_cast<char>(src + 3);
    return enc;
}

char decrypt(const char& src){
    char dec = static_cast<char>(src - 3);
    return dec;
}

std::string& modify(std::string& src_param, char(*modifier)(const char&)){
    for (size_t i{}; i < std::size(src_param); ++i) {
        src_param[i] = modifier(src_param[i]);
    }
    return src_param;
}

BoxContainer<std::string>& modify(BoxContainer<std::string>& src_param, char(*modifier)(const char&)) {
    for (size_t i{}; i < src_param.size(); ++i) {
        for (size_t j{}; j < src_param.get_item(i).size(); ++j) {
            src_param.get_item(i)[j] = modifier(src_param.get_item(i)[j]);
        }
    }
    return src_param;
}

std::string get_best(BoxContainer<std::string> src_param, bool(*compatator)(std::string, std::string)) {
    std::string best{};
    for (size_t i{}; i < src_param.size(); ++i) {
        if (compatator(src_param.get_item(i), best))
            best = src_param.get_item(i);
    }
    return best;
}

bool larger_in_size(std::string src1, std::string src2) {
    if (src1.size() > src2.size())
        return true;
    else
        return false;
}

bool greater_lexicographically(std::string src1, std::string src2) {
    return (src1 > src2);
}

int main() {
    std::string src_param{"You are best friend"};
    auto enc = modify(src_param, encrypt);
    std::cout << "enc : " << enc << std::endl;
    std::cout << "dec : " << modify(enc, decrypt) << std::endl;

    auto box{BoxContainer<std::string>{}};
    box.add("This ");
    box.add("is ");
    box.add("my ");
    box.add("box ");

    std::cout << box << std::endl;
    auto enc_box = modify(box, encrypt);
    std::cout << "enc box : " << enc_box << std::endl;
    auto dec_box = modify(box, decrypt);
    std::cout << "dec box : " << dec_box << std::endl;

    std::cout << "larger in size : " << get_best(dec_box, larger_in_size) << std::endl;
    std::cout << "greater lexicographically : " << get_best(dec_box, greater_lexicographically) << std::endl;

    return 0;
}