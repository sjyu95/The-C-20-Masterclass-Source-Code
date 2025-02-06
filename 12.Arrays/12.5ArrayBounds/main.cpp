#include <iostream>

int main() {
	int arr[]{1,2,3,4,5,6,7,8,9,0};

	std::cout << arr << std::endl;
	for (const auto i : arr) {
		std::cout << i;
	}
	std::cout << std::endl;

	// arr[11222] = 10000;
	// std::cout << arr[11222] << std::endl;

	std::cout << "Bye~!" << std::endl;

	return 0;
}