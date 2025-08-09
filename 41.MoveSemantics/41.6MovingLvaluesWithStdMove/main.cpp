#include <iostream>
#include <memory>
#include "boxcontainer.h"

void PopulateBox(BoxContainer<int>& box, int modifier) {
	for (auto i{0}; i < 20; ++i) {
		box.add((i+1) * modifier);
	}
}

BoxContainer<int> MakeBox(int modifier) {
	BoxContainer<int> localbox{20};
	PopulateBox(localbox, modifier);
	return localbox;
}

template <typename T>
void swap(T& a, T& b) {
	T temp{a};
	a = b;
	b = temp;
}

template <typename T>
void swap2(T& a, T& b) {
	T temp{std::move(a)};
	a = std::move(b);
	b = std::move(temp);
}

int main(int argc, char** argv) {
	BoxContainer<int> boxarray[2];

	std::cout << "---------------------" << std::endl;

	boxarray[0] = MakeBox(2);
	boxarray[1] = MakeBox(10);

	std::cout << "---------------------" << std::endl;

	for (auto i{0}; i < std::size(boxarray); ++i) {
		std::cout << i << " : " << boxarray[i] << std::endl;
	}

	swap2(boxarray[0], boxarray[1]);

	for (auto i{0}; i < std::size(boxarray); ++i) {
		std::cout << i << " : " << boxarray[i] << std::endl;
	}

	return 0;
}