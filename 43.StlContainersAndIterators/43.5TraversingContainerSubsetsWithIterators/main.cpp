#include <array>
#include <iostream>
#include <vector>

template <typename T>
void print_collection(const T& col, size_t begin_adjust, size_t end_adjust) {
    auto begin_it = col.begin() + begin_adjust;
    auto end_it = col.end() - end_adjust;

    while (begin_it != end_it) {
        std::cout << *begin_it << std::endl;
        begin_it++;
    }
}

int main(int argc, char** argv) {
    std::vector<int> vec1{1,2,3};
    std::array<int, 4> arr1{10,20,30};

    print_collection(vec1, 1,1); // 2
    print_collection(arr1, 1,0); // 20, 30, 0

    return 0;
}