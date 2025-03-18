#include <iostream>
#include <memory>
#include "dog.h"

int main(int argc, char** argv) {
	std::shared_ptr<int[]> int_arr{new int[3]{1,2}};
	std::shared_ptr<Dog[]> dog_arr{new Dog[3]{Dog("Snoopy1")}};

	// for (size_t i{}; i < std::size(int_arr); i++) { // std::size error
	for (size_t i{}; i < 3; i++) {
		std::cout << int_arr[i] << std::endl;
		std::cout << dog_arr[i].getName() << std::endl;
	}

	return 0;
}