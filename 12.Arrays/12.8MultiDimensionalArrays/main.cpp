#include <iostream>

int main() {
    constexpr size_t SIZE_X{5}, SIZE_Y{4}, SIZE_Z{3};
    // unsigned package[SIZE_X][SIZE_Y][SIZE_Z]{};
    unsigned package[][SIZE_Y][SIZE_Z]{ // omit just first demension size
        {1,2,3},
        {4,5,6}
    };

    // modify
    package[1][2][3] = 1024;
    
    for (auto i{0}; i < std::size(package); ++i) {
        std::cout << "{ " << std::endl;
        for (auto j{0}; j < std::size(package[i]); ++j) {
            std::cout << "( ";
            for (auto k{0}; k < std::size(package[i][j]); ++k) {
                std::cout << package[i][j][k] << " ";
            }
            std::cout << ")";
            std::cout << std::endl;
        }
        std::cout << "}" << std::endl;
    }

    return 0;
}