#include <cassert>
#include <initializer_list>
#include <iostream>

class Point {
public:
    Point(std::initializer_list<double> list);
    void PrintInfo() const;

private:
    double m_x{};
    double m_y{};
};

Point::Point(std::initializer_list<double> list) {
    assert(list.size() == 2);

    m_x = *list.begin();
    m_y = *(list.begin() + 1);

    for (size_t i{}; i < list.size(); i++) {
        std::cout << i << " : " << *(list.begin() + i) << std::endl;
    }
    std::cout << "----" << std::endl;

    for (auto it = list.begin(); it != list.end(); it++) {
        std::cout << *it << std::endl;
    }
    std::cout << "----" << std::endl;

    for (auto& i : list) {
        std::cout << i << std::endl;
    }
    std::cout << "----" << std::endl;
}

void Point::PrintInfo() const {
    std::cout << "m_x : " << m_x << ", m_y : " << m_y << std::endl;
}

int main(int argc, char** argv) {
    Point p{1.0, 2.0};
    p.PrintInfo();

    return 0;
}