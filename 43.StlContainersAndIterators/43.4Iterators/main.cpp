#include <iostream>
#include <vector>

template <typename T>
void print_collection(const T& col) {
    auto it = col.begin();
    while (it != col.end()) {
        std::cout << *it << std::endl;
        it++;
    }
}

int main() {
    std::vector<int> vec1{1,2,3};

    std::vector<int>::iterator begin_it = vec1.begin();
    std::vector<int>::iterator end_it = vec1.end();

    std::cout << std::boolalpha;
    std::cout << *begin_it << std::endl;
    std::cout << (begin_it == end_it) << std::endl;

    begin_it++;
    std::cout << *begin_it << std::endl;
    std::cout << (begin_it == end_it) << std::endl;

    begin_it++;
    std::cout << *begin_it << std::endl;
    std::cout << (begin_it == end_it) << std::endl;

    begin_it++;
    std::cout << *begin_it << std::endl;
    std::cout << (begin_it == end_it) << std::endl;

    print_collection(vec1);

    return 0;
}