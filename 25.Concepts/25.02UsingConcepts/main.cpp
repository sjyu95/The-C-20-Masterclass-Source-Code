#include <iostream>
#include <concepts>

template <typename T>
requires std::integral<T>
T add(T a, T b) {
	return a + b;
}

template <std::integral T>
T add2(T a, T b) {
	return a + b;
}

template <typename T>
T add3(T a, T b) requires std::integral<T> {
	return a + b;
}

auto add4(std::integral auto a, std::integral auto b) {
	return a + b;
}

int main(int argc, char** argv) {
	int a{1}, b{2};
	auto result = add(a, b);
	std::cout << "add result (int) is " << result << ", sizeof(result) is " << sizeof(result) << std::endl;

	char c{'2'}, d{'3'};
	auto result2 = add4(a, b);
	std::cout << "add result2 (char) is " << result2 << ", sizeof(result2) is " << sizeof(result2) << std::endl;

	double e{1.1}, f{2.2};
	// auto result3 = add(e, f);
	// std::cout << "add result3 (double) is " << result3 << ", sizeof(result3) is " << sizeof(result3) << std::endl;

	return 0;
}