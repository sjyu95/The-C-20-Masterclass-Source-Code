#include <concepts>

std::integral auto add (std::integral auto a, std::integral auto b) {
    return a + b;
}

int main(int argc, char** argv) {
    // std::floating_point auto result = add(1, 2);
    std::integral auto result = add(1, 2);
}