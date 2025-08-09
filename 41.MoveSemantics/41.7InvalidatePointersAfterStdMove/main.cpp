#include <iostream>
#include "boxcontainer.h"

template <typename T>
void PopulateBox(BoxContainer<T> box, int modifier) {
	for (size_t i{0}; i < modifier; ++i) {
		box.add((i+1) * modifier);
	}
}

int main() {
	BoxContainer<int> box1;

	std::cout << "box 1 : " << box1 << std::endl;
	PopulateBox(box1, 2);
	std::cout << "box 1 : " << box1 << std::endl;

	BoxContainer<int> box2{std::move(box1)};
	std::cout << "box 2 : " << box2 << std::endl;

	std::cout << "------------------" << std::endl;
	std::cout << "box 1 : " << box1 << std::endl;
	std::cout << "box 2 : " << box2 << std::endl;

	return 0;
}