#include <iostream>
#include "boxcontainer.h"

int main() {
	BoxContainer<int> boxContainer{10};

	boxContainer.add(1);
	boxContainer.add(2);
	boxContainer.add(3);
	boxContainer.add(1);

	std::cout << "box containter size: " << boxContainer.size() << std::endl;

	boxContainer.remove_item(2);
	std::cout << "box containter size: " << boxContainer.size() << std::endl;

	boxContainer.remove_all(1);
	std::cout << "box containter size: " << boxContainer.size() << std::endl;

	return 0;
}