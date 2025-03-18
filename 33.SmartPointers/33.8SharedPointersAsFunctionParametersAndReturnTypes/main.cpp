#include <iostream>
#include <memory>
#include "dog.h"

void pass_by_value(std::shared_ptr<Dog> dog) {
	dog->printName();
	std::cout << "in - use_count() : " << dog.use_count() << std::endl;
}

void pass_by_ref(std::shared_ptr<Dog>& dog) {
	dog->printName();
	std::cout << "in - use_count() : " << dog.use_count() << std::endl;
}

void pass_by_const_ref(const std::shared_ptr<Dog>& dog) {
	dog->printName();
	dog->setName("Snoopy100");
	// dog.reset(new Dog()); // error
	std::cout << "in - use_count() : " << dog.use_count() << std::endl;
}

std::shared_ptr<Dog> return_by_value() {
	auto dog = std::make_shared<Dog>("Puppy");
	std::cout << "in - use_count() : " << dog.use_count() << std::endl;
	return dog;
}

std::shared_ptr<Dog>& return_by_ref_invalid() {
	auto dog = std::make_shared<Dog>("Puppy");
	std::cout << "in - use_count() : " << dog.use_count() << std::endl;
	return dog;
}

int main(int argc, char** argv) {
	std::shared_ptr<Dog> dog1 = std::make_shared<Dog>("Snoopy1");
	pass_by_value(dog1);
	std::cout << "out - use_count() : " << dog1.use_count() << std::endl;

	std::shared_ptr<Dog> dog2 = std::make_shared<Dog>("Snoopy2");
	pass_by_ref(dog2);
	std::cout << "out - use_count() : " << dog2.use_count() << std::endl;

	std::shared_ptr<Dog> dog3 = std::make_shared<Dog>("Snoopy3");
	pass_by_const_ref(dog3);
	std::cout << "out - use_count() : " << dog3.use_count() << std::endl;

	auto dog4 = return_by_value();
	std::cout << "out - use_count() : " << dog4.use_count() << std::endl;

	auto dog5 = return_by_ref_invalid();
	std::cout << "out - use_count() : " << dog5.use_count() << std::endl;

	return 0;
}