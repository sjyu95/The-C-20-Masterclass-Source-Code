#include <iostream>

namespace Level1 {
    namespace Level2 {
        namespace Level3 {
            double weight{3.3};
        }
    }
}

int main(int argc, char** argv) {
    namespace data = Level1::Level2::Level3;

    // std::cout << "weitht : " << Level1::Level2::Level3::weight << std::endl;
    std::cout << "weitht : " << data::weight << std::endl;
    return 0;
}