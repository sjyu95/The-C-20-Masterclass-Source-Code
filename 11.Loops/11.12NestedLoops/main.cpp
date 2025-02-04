#include <iostream>
#include <iomanip>

int main() {
    constexpr size_t ROW_COUNT{15};
    constexpr size_t COL_COUNT{5};
    size_t row{}, col{0};

    for (; row < ROW_COUNT; ++row) {
        for (size_t col{}; col < COL_COUNT; ++col) {
            std::cout << "(row " << std::setw(2) << row << ", col " << std::setw(2) << col << ") "; 
        }
        std::cout << std::endl;
    }

    row = 0, col = 0; // Causion!!
    while (row < ROW_COUNT) {
        while (col < COL_COUNT) {
            std::cout << "(row " << std::setw(2) << row << ", col " << std::setw(2) << col << ") "; 
            ++col;
        }
        ++row, col = 0;
        std::cout << std::endl;
    }

    row = 0, col = 0;
    do {
        do {
            std::cout << "(row " << std::setw(2) << row << ", col " << std::setw(2) << col << ") "; 
            ++col;
        } while (col < COL_COUNT);
        ++row, col = 0;
        std::cout << std::endl;
    } while (row < ROW_COUNT);
    
    return 0;
}