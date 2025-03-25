#include <iostream>
#include "animal.h"
#include "dog.h"
#include "feline.h"

void call_non_virtual_funcion(Animal* animal) {
	Feline* pFeline = dynamic_cast<Feline*>(animal);
	if (pFeline) {
		pFeline->do_something_feline();
	} else {
		std::cout << "can't cast to Feline" << std::endl;
	}

	try {
		Dog& rDog = dynamic_cast<Dog&>(*animal);
		rDog.do_something_dog();
	} catch(...) {
		std::cout << "can't cast to Dog" << std::endl;
	}
}

int main() {
	Animal* pAnimal{new Feline{"short fur", "feline"}};
	pAnimal->breathe();

	Feline* pFeline = dynamic_cast<Feline*>(pAnimal);
	pFeline->do_something_feline();

	Feline& rFeline = dynamic_cast<Feline&>(*pAnimal);
	pFeline->do_something_feline();

	call_non_virtual_funcion(pAnimal);

	Animal* pAnimal2{new Dog{"long fur", "dog"}};
	call_non_virtual_funcion(pAnimal2);

	delete pAnimal;
	delete pAnimal2;
	return 0;
}