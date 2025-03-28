#include <iostream>
#include <vector>

template <typename T>
void print_reverse_collection(const T& col) {
    auto rbegin_it = col.rbegin();
    auto rend_it = col.rend();

    while (rbegin_it != rend_it) {
        std::cout << *rbegin_it << std::endl;
        rbegin_it++;
    }
}

int main() {
    std::vector<int> vec1{1,2,3,4,5};
    print_reverse_collection(vec1);

    std::vector<int>::reverse_iterator rbegin_it = vec1.rbegin();
    std::cout << *rbegin_it << std::endl;


    std::vector<int>::reverse_iterator rend_it = vec1.rend();
    std::cout << *rend_it << std::endl;
    return 0;
}