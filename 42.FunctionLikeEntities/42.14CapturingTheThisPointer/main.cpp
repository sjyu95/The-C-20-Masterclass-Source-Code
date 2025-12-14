#include <iostream>

class Item{
public:
    Item(int a, int b) : m_var1{a}, m_var2{b} {}

    void some_variable_function() {
        // auto func = [&]{
        auto func = [this]{
            std::cout << "m_var1 : " << m_var1 << ", m_var2 : " << m_var2 << std::endl;
            // std::cout << "m_var1 : " << this->m_var1 << ", m_var2 : " << this->m_var2 << std::endl;
        };
        func();
    }

private:
    int m_var1{};
    int m_var2{};
};

int main() {
    Item item{1,2};
    item.some_variable_function();

    return 0;
}