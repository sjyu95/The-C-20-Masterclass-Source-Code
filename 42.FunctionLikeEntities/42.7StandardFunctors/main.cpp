#include <functional>
#include <iostream>
#include "boxcontainer.h"

template<typename T, typename Comparator>
const T& get_best(const BoxContainer<T>& container, Comparator comp) {
    T& best = container.get_item(0);
    for (size_t i{1}; i < container.size(); ++i) {
        if (comp(container.get_item(i), best))
            best = container.get_item(i);
    }
    return best;
}

// custom functor
template <typename T>
class Greater {
public:
    bool operator() (const T& a, const T& b) {
        return a>b;
    }
};

// custom function
template <typename T>
bool Greate(const T& a, const T& b) {
    return a > b;
}

int main(int argc, char** argv) {
    std::plus<int> add;
    std::minus<int> minus;
    std::greater<int> greater_comp;

    std::cout << "std functor plus 1+2 = " << add(1,2) << std::endl;
    std::cout << "std functor minus 10-2 = " << minus(10,2) << std::endl;
    std::cout << std::boolalpha;
    std::cout << "std functor greater 10 > 2 is " << greater_comp(10,2) << std::endl;

    BoxContainer<std::string> boxes{};
    boxes.add("The ");
    boxes.add("sky ");
    boxes.add("is ");
    boxes.add("blue. ");

    std::cout << "get best box item using custom functor is " << get_best<std::string>(boxes, Greater<std::string>{}) << std::endl;
    std::cout << "get best box item using std::greater is " << get_best<std::string>(boxes, std::greater<std::string>{}) << std::endl;
    std::cout << "get best box item uaing custom function pointer is " << get_best<std::string>(boxes, Greate<std::string>) << std::endl;

    return 0;
}