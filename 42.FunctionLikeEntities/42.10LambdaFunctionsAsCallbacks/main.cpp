#include <iostream>
#include "boxcontainer.h"

auto encrypt = [](const char & a) {
    return static_cast<char>(a+3);
};

auto decrypt = [](const char & a) {
    return static_cast<char>(a-3);
};

std::string& modify(std::string& string_param, char(*modifier)(const char &)) {
    for(size_t i{}; i < string_param.size(); ++i) {
        string_param[i] = modifier(string_param[i]);
    }
    return string_param;
}

BoxContainer<std::string>& modify(BoxContainer<std::string>& sentence, char(*modifier)(const char &)) {
    for(size_t i{}; i < sentence.size(); ++i) {
        for(size_t j{}; j < sentence.get_item(i).size(); ++j) {
            sentence.get_item(i)[j] = modifier(sentence.get_item(i)[j]);
        }
    }
    return sentence;
}

std::string get_best(BoxContainer<std::string>& sentence, bool(*comp)(std::string& a, std::string& b)) {
    std::string best = sentence.get_item(0);
    for(size_t i{1}; i < sentence.size(); ++i) {
        if(comp(sentence.get_item(i), best)) {
            best = sentence.get_item(i);
        }
    }
    return best;
}

int main(int argc, char** argv) {
    std::cout << "string encrypt decrypt: " << std::endl;
    std::string hello{"hello"};
    auto enc = modify(hello, encrypt);
    std::cout << "encrypt hello is " << enc << std::endl;
    std::cout << "decrypt is " << modify(enc, decrypt) << std::endl;

    std::cout << "-------------" << std::endl;
    std::string hello1{"hello"};
    auto enc1 = modify(hello1, [](const char & a){return static_cast<char>(a+3);});
    std::cout << "encrypt hello is " << enc1 << std::endl;
    std::cout << "decrypt is " << modify(enc1, [](const char & a){return static_cast<char>(a-3);}) << std::endl;

    std::cout << "-------------" << std::endl;
    BoxContainer<std::string> box;
    box.add("The ");
    box.add("sky ");
    box.add("is ");
    box.add("blue ");
    auto enc2 = modify(box, encrypt);
    std::cout << "encrypt box is " << enc2 << std::endl;
    std::cout << "decrypt is " << modify(enc2, decrypt) << std::endl;

    auto larger_in_size = [](std::string& a, std::string& b) {
        return (a.size() > b.size());
    };
    auto greator_lexcogiographical = [](std::string& a, std::string& b) {
        return (a > b);
    };
    std::cout << "-------------" << std::endl;
    BoxContainer<std::string> box2;
    box2.add("The ");
    box2.add("sky ");
    box2.add("is ");
    box2.add("blue ");
    auto best = get_best(box2, larger_in_size);
    std::cout << "larger in size : " << best << std::endl;
    best = get_best(box2, greator_lexcogiographical);
    std::cout << "greator lexicogeographly : " << best << std::endl;

    return 0;
}