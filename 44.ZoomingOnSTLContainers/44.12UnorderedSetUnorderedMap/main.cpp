#include <concepts>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>

template <typename T>
void PrintCollection(const T& coll) {
    for (auto e : coll) {
        std::cout << e << std::endl;
    }
}

template <typename T>
void PrintMapCollection(const T& coll) {
    for (auto [k, v] : coll) {
        std::cout << k << " : " << v << std::endl;
    }
}

int main() {
    std::set<int> set1{1,2,3,4,5};
    std::unordered_set set2{1,2,5,4,3};

    PrintCollection(set1);
    PrintCollection(set2);

    std::map<int, std::string> map1{
        std::make_pair(1,"sejung"),
        std::make_pair(2, "mully"),
        std::make_pair(3, "puppy")
    };
    PrintMapCollection(map1);

    std::unordered_map<int, std::string> map2{
        std::make_pair(1,"sejung"),
        std::make_pair(3, "puppy"),
        std::make_pair(2, "mully")
    };
    PrintMapCollection(map2);

    return 0;
}