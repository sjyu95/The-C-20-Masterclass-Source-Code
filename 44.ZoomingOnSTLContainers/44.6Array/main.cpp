#include <array>
#include <iostream>

class Item {
public:
    Item() = default;
    Item(int val) : m_val(val) {
        std::cout << "Constructor called" << std::endl;
    }

    int get() const { return m_val; }
private:
    int m_val{};
};

std::ostream& operator<< (std::ostream& os, const Item& item) {
    os << item.get() << " ";
    return os;
}

template <typename T>
void print_collection(const T& coll) {
    auto it = coll.begin();
    while (it != coll.end()) {
        std::cout << *it << ", ";
        it++;
    }
}

int main(int argc, char** argv) {
    std::array<int,5> arr1{1,2,3,4,5};

    std::cout << arr1.front() << std::endl;
    std::cout << arr1[1] << std::endl;
    std::cout << arr1.at(2) << std::endl;
    std::cout << *(arr1.data() + 3) << std::endl;
    std::cout << arr1.back()<< std::endl;

    std::cout << std::endl;
    print_collection(arr1);

    std::cout << std::endl;
    std::array<Item, 3> arr2{Item{10}, Item{20}, Item{30}};
    print_collection(arr2);

    std::cout << std::endl;
    std::array<Item, 3>::reverse_iterator rit = arr2.rbegin();
    while (rit != arr2.rend()) {
        std::cout << *rit << std::endl;
        rit++;
    }
    return 0;
}