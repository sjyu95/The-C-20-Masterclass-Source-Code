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

int main(int argc, char** argv) {
	BoxContainer<int> boxarray[2];

	std::cout << "---------------------" << std::endl;

	for (auto i{0}; i < std::size(boxarray); ++i) {
		boxarray[i] = MakeBox(2);
	}

	std::cout << "---------------------" << std::endl;

	return 0;
}