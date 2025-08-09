#include <iostream>
#include <string>
#include <utility>
#include <vector>

int main() {
    std::pair<int, std::string> p1{1, "Sejung"};
    std::cout << p1.first << " , " << p1.second << std::endl;

    auto [k, v] = p1;
    std::cout << k << " , " << v << std::endl;

    auto p2 = std::make_pair(2, "Sejung2");
    std::cout << p2.first << " , " << p2.second << std::endl;

    std::vector<std::pair<int, std::string>> vec{{1,"aaa"}, {2, "bbb"}};
    for (auto [k, v] : vec) {
        std::cout << k << " , " << v << std::endl;
    }

    for (auto e : vec) {
        std::cout << e.first << " , " << e.second << std::endl;
    }

    return 0;
}
