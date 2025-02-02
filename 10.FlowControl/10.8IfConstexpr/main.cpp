#include <iostream>

int main(){
    //constexpr int result{true};
    //if constexpr(result) {
    if constexpr( (120 > 100) ? true : false ) {
        std::cout << "result is true. evaluated in compile time." << std::endl;
    }
    else {
        std::cout << "result is false. evaluated in compile time." << std::endl;
    }

    return 0;
}