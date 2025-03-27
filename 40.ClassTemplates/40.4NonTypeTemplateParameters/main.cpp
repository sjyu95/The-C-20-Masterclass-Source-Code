#include <iostream>
#include "boxcontainer.h"

int main() {
	BoxContainer<int,3> boxContainer{10};

	boxContainer.add(1);
	boxContainer.add(2);
	boxContainer.add(3);
	boxContainer.add(1);
	boxContainer.add(4);

	return 0;
}