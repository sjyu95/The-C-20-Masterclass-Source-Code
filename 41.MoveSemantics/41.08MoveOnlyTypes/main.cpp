#include <iostream>
#include <memory>
#include "boxcontainer.h"

template <typename T>
void PopulateBox(BoxContainer<T>* box, int modifier) {
	for (size_t i{0}; i < modifier; ++i) {
		box->add((i+1) * modifier);
	}
}

int main() {
	BoxContainer<int> box1;

	std::cout << "box 1 : " << box1 << std::endl;
	PopulateBox(&box1, 2);
	std::cout << "box 1 : " << box1 << std::endl;

	BoxContainer<int> box2 = std::move(box1);
	std::cout << "box 2 : " << box2 << std::endl;

	std::cout << "------------------" << std::endl;
	std::cout << "box 1 : " << box1 << std::endl;
	std::cout << "box 2 : " << box2 << std::endl;

	std::unique_ptr<int> int_ptr = std::make_unique<int>(33);
	std::cout << "------------------" << std::endl;
	std::cout << "*int_ptr : " << *int_ptr << std::endl;

	std::unique_ptr<int> int_ptr2 = std::move(int_ptr);
	std::cout << "*int_ptr2 : " << *int_ptr2 << std::endl;

	if (int_ptr)
		std::cout << "*int_ptr : " << *int_ptr << std::endl;
	else
		std::cout << "*int_ptr is moved" << std::endl;

	return 0;
}