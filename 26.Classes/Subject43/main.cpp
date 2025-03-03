#include <iostream>
#include "box.h"

int main(int argc, char** argv) {
    Box box;
    box.m_width = 10;
    box.m_length = 20;
    box.m_height = 30;
    std::cout << "base area : " << box.base_area() << std::endl;
    std::cout << "volume : " << box.volume() << std::endl;

    return 0;
}