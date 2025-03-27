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

	std::cout << "-----------" << std::endl;

	std::shared_ptr<BoxContainer<int,4>> boxContainer2 {std::make_shared<BoxContainer<int,4>>(10)};

	boxContainer2->add(1);
	boxContainer2->add(2);
	boxContainer2->add(3);
	boxContainer2->add(4);
	boxContainer2->add(5);

	return 0;
}