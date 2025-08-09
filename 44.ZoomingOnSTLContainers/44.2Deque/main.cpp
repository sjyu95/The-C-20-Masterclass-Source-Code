#include <deque>
#include <iostream>

template <typename T>
class Item {
public:
    Item() = default;
    Item(T item) : m_item{item} {}

    T get() const;
private:
    T m_item{};
};

template <typename T>
T Item<T>::get() const {
    return m_item;
}

template <typename T>
std::ostream& operator<< (std::ostream& os, const Item<T>& rhs) {
    os << rhs.get();
    return os;
}

template <typename T>
void print_collection(const T& col) {
    std::cout << "[ ";
    for (auto e : col) {
        std::cout << e << " ";
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::deque<int> nums{1,2,3,4,5};
    nums.insert(nums.end(), 6);
    nums.emplace_front(0);
    print_collection(nums);

    using Item = Item<int>;

    std::deque<Item> items{Item{100}, Item{200}, Item{300}, Item{400}, Item{500}};
    items.insert(items.end(), Item{600});
    items.emplace_front(Item{});
    items.emplace_back(Item{700});
    print_collection(items);

    std::cout << ".front() : " << items.front() << std::endl;
    print_collection(items);

    std::cout << ".back() : " << items.back() << std::endl;
    print_collection(items);

    std::cout << ".pop_front() : " << std::endl;
    items.pop_front();
    print_collection(items);

    std::cout << ".pop_back() : " << std::endl;
    items.pop_back();
    print_collection(items);

    std::cout << ".size() : " << items.size() << std::endl;
    items.resize(100);
    std::cout << ".resize(100) : " << items.size() << std::endl;
    items.resize(6);

    std::cout << ".erase(begin) : "<< std::endl;
    items.erase(items.begin());
    print_collection(items);

    std::deque<Item> items2{Item{1}, Item{2}, Item{3}};
    items.swap(items2);
    print_collection(items);



}