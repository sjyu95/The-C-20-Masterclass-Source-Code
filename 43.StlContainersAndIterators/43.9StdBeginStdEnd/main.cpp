#include <array>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec1{1,2,3};

    auto begin_it = std::begin(vec1);
    auto end_it = std::end(vec1);

    while (begin_it != end_it) {
        std::cout << *begin_it << std::endl;
        begin_it++;
    }
    std::cout << std::endl;

    std::array<int, 6> arr1{100,200,300};

    auto arr_begin_it = std::begin(arr1);
    auto arr_end_it = std::end(arr1);

    while (arr_begin_it != arr_end_it) {
        std::cout << *arr_begin_it << std::endl;
        arr_begin_it++;
    }
    std::cout << std::endl;

    return 0;
}