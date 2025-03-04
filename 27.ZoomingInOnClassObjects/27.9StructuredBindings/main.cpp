#include <iostream>

struct Point {
    double x{};
    double y{};
};

int main(int argc, char** argv) {
    Point pt{2.4, 5.1};

    auto [x,y] = pt;
    std::cout << "x : " << x << ", y : " << y << std::endl;

    
    auto& [xx, yy] = pt;
    xx++;
    yy++;
    std::cout << "xx : " << xx << ", yy : " << yy << std::endl;

    auto func = [x, y]() {
        std::cout << "(captured) x : " << x << ", y : " << y << std::endl;
    };
    func();

    // double [x2, y2] = pt;
    // std::cout << "x2: " << x2 << ", y2 : " << y2 << std::endl;

    return 0;
}