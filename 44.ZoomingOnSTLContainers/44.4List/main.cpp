#include <list>
#include <iostream>

template <typename T>
class Item {
public:
    Item() = default;
    Item(T item) : m_item{item} {}

    T get() const { return m_item; }
private:
    T m_item{};
};

template <typename T>
std::ostream& operator<< (std::ostream& os, const Item<T>& item) {
    os << item.get();
    return os;
}

template <typename T>
void print_collection(const std::list<T> col) {
    std::cout << "[ ";
    auto begin_it = col.begin();
    auto end_it = col.end();
    for (auto e : col) {
        std::cout << e << " ";
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::list<Item<int>> flist = {Item<int>{1}, Item<int>{2}, Item<int>{3}, Item<int>{4}, Item<int>{5}};
    std::list<Item<int>> flist3 = {Item<int>{10}, Item<int>{20}, Item<int>{30}};
    std::list<int> flist2 = {100,200,300,400,500};
    std::list<int> flist4 = {1000,2000,3000};

    print_collection(flist);
    print_collection(flist2);

    flist.pop_front();
    print_collection(flist);

    flist.pop_back();
    print_collection(flist);

    flist.push_front(Item<int>{100});
    print_collection(flist);

    flist.push_back(Item<int>{500});
    print_collection(flist);

    flist.swap(flist3);
    print_collection(flist);
    print_collection(flist3);

    flist2.merge(flist4);
    print_collection(flist2);
    flist2.reverse();
    print_collection(flist2);

    flist4.emplace_front(1);
    flist4.emplace_front(2);
    flist4.emplace_front(3);

    // flist2.splice_after(flist2.end() - 1, flist4);
    // print_collection(flist2);

    // flist2.remove_if([](int a){ if (a == 3) return true; });
    flist2.remove_if([](int a){ return (a == 3) ? true : false; });
    flist2.remove_if([](int a){ return (a == 3); });
    print_collection(flist2);

    return 0;
}