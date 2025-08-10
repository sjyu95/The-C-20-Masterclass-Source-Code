#include <iostream>
#include <string>
#include "boxcontainer.h"

template <typename T>
using compatator_T = bool(*)(const T&, const T&);

template <typename T>
T get_best(BoxContainer<T> src_param, compatator_T<T> compatator) {
    T best{};
    for (size_t i{}; i < src_param.size(); ++i) {
        if (compatator(src_param.get_item(i), best))
            best = src_param.get_item(i);
    }
    return best;
}

template <typename T>
bool larger_in_size(const T& src1, const T& src2) {
    if (src1.size() > src2.size())
        return true;
    else
        return false;
}

template <typename T>
bool greater_lexicographically(const T& src1, const T& src2) {
    return (src1 > src2);
}

template <typename T>
T smaller(const T& val1, const T& val2) {
    return val1 < val2 ? val1 : val2;
}

int main() {
    auto box{BoxContainer<std::string>{}};
    box.add("This ");
    box.add("is ");
    box.add("my ");
    box.add("box ");

    std::cout << box << std::endl;

    compatator_T<std::string> larger{larger_in_size}, greater{greater_lexicographically};
    std::cout << "larger in size : " << get_best<std::string>(box, larger) << std::endl;
    std::cout << "greater lexicographically : " << get_best<std::string>(box, greater) << std::endl;

    std::cout << "smaller (1,2) : " << smaller<int>(1,2) << std::endl;

    return 0;
}