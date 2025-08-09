#include <iostream>
#include <vector>

class Item {
public:
    Item() = default;
    Item(int val) : m_val(val) {}

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
    std::vector<int> vec1{1,2,3,4,5};

    std::cout << vec1.front() << std::endl;
    std::cout << vec1[1] << std::endl;
    std::cout << vec1.at(2) << std::endl;
    std::cout << *(vec1.data() + 3) << std::endl;
    std::cout << vec1.back()<< std::endl;

    std::cout << std::endl;
    print_collection(vec1);

    std::cout << std::endl;
    std::vector<Item> vec2{Item{10}, Item{20}, Item{30}};
    print_collection(vec2);

    std::cout << std::endl;
    vec2.emplace(vec2.begin(), 0);
    print_collection(vec2);

    std::cout << std::endl;
    vec2.emplace_back(100);
    print_collection(vec2);

    std::cout << std::endl;
    std::cout << "curr capacity : " << vec2.capacity() << std::endl;
    vec2.resize(100);
    std::cout << "resize capacity : " << vec2.capacity() << std::endl;
    vec2.clear();
    std::cout << "clear capacity : " << vec2.capacity() << std::endl;
    vec2.shrink_to_fit();
    std::cout << "shrink_to_fit capacity : " << vec2.capacity() << std::endl;

    std::vector<Item> vec3{Item{10}, Item{20}, Item{30}};
    vec2.swap(vec3);
    std::cout << "curr capacity : " << vec2.capacity() << std::endl;
    print_collection(vec2);

    std::cout << std::endl;
    std::vector<Item>::reverse_iterator rit = vec2.rbegin();
    while (rit != vec2.rend()) {
        std::cout << *rit << std::endl;
        rit++;
    }
    return 0;
}