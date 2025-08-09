#include <iostream>

int add (int x, int y) {
    return x + y;
}

int main(int argc, char** argv) {
    int x{10};
    int y{20};

    int&& z = x + y;
    std::cout << "int&& z = " << z << std::endl;

    int&& result = add(x, y);
    std::cout << "add(x, y)'s rvalue reference : " << result << std::endl;

    return 0;
}