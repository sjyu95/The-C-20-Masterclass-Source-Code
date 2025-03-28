#include <iostream>
#include <vector>

template <typename T>
void print_collection_not_modify(const T& col) {
    auto cbegin_it = col.cbegin();
    auto cend_it = col.cend();

    while(cbegin_it != cend_it) {
        std::cout << *cbegin_it << std::endl;
        cbegin_it++;
    }
}

template <typename T>
void print_collection_not_modify_and_reverse(const T& col) {
    auto crbegin_it = col.crbegin();
    auto crend_it = col.crend();

    while(crbegin_it != crend_it) {
        std::cout << *crbegin_it << std::endl;
        crbegin_it++;
    }
}

int main() {
    std::vector<int> vec1{1,2,3,4,5};
    print_collection_not_modify(vec1);
    print_collection_not_modify_and_reverse(vec1);

    std::vector<int>::const_reverse_iterator crbegin = vec1.crbegin();
    std::cout << *crbegin << std::endl;
    // *crbegin = 100;

    return 0;
}