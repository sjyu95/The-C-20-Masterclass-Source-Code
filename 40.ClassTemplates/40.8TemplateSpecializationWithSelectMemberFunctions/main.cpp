#include <iostream>
#include <memory>
#include "boxcontainer.h"

template class BoxContainer<int, 4>; // explicit template instanciation

int main() {
	BoxContainer boxContainer{10};

	boxContainer.add(1);
	boxContainer.add(2);
	boxContainer.add(3);
	boxContainer.add(1);
	boxContainer.add(4);
	std::cout << boxContainer.get_max() << std::endl;

	std::cout << "-----------" << std::endl;

	BoxContainer<const char*> boxContainerChar{};
	boxContainerChar.add("hello");
	boxContainerChar.add("world");
	std::cout << boxContainerChar.get_max() << std::endl;

	return 0;
}