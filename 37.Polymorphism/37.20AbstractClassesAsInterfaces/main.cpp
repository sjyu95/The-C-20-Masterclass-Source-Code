#include <iostream>
#include "dog.h"
#include "stream_insertable.h"

class Point : public IStreamInsertable {
public:
    Point() = default;
    Point(int x, int y) : m_x{x}, m_y{y} {}

    void stream_insert(std::ostream& os) const {
        os << "m_x: " << m_x << ", m_y: " << m_y << std::endl;
    }

private:
    int m_x{};
    int m_y{};
};

int main() {
    Point point{1,2};
    operator<<(std::cout, point);
    std::cout << "Point : " << point << std::endl;

    Animal* pAnimal{new Dog{"long fur", "dog"}};
    std::cout << *pAnimal;

    delete pAnimal;

    return 0;
}