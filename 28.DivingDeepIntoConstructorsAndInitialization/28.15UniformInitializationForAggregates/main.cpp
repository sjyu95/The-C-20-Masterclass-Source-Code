#include <iostream>
#include <string>

class Point{
public:
    Point(double x, double y) : m_x(x), m_y(y) {}
private:
    double m_x{};
    double m_y{};
};

struct Person{
    std::string name;
    int age;
};

int main(int argc, char** argv) {
    Point point2(1.1, 2.2);

    Person person{"John", 40};
    Person person2("John", 40.7);

    return 0;
}