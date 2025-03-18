#include <iostream>
#include <memory>
#include "dog.h"

void some_function_v1(std::unique_ptr<Dog> dog) {
	dog->printName();
}

void some_function_v2(const std::unique_ptr<Dog>& dog) {
	dog->printName();
	dog->setName("rename to Puppy");
	// dog.reset();
}

std::unique_ptr<Dog> get_unique_dog_ptr() {
	auto ptr = std::make_unique<Dog>("get_unique_dog_ptr");
	return ptr;
}

int main(int argc, char** argv) {
	auto pDog = std::make_unique<Dog>("Snoopy-1");
	some_function_v1(std::move(pDog));
	if (!pDog) {
		std::cout << "pDog deleted" << std::endl;
	}

	const auto pDog2 = std::make_unique<Dog>("Snoopy-2");
	some_function_v2(pDog2);
	pDog2->printName();

	some_function_v1(std::make_unique<Dog>("temporary dog"));

	auto pDog3 = get_unique_dog_ptr();
	pDog3->printName();

	return 0;
}