#include <iostream>
#include <memory>
#include "dog.h"

std::unique_ptr<Dog> get_uniq_ptr(){
	// std::unique_ptr<Dog> tmp{nullptr};
	// tmp = std::move(new Dog("Snoopy1")); // error. rvalue
	// tmp = new Dog{"Snoopy1"}; // error.
	// tmp = std::make_unique<Dog>("Snoopy1");

	std::unique_ptr<Dog> tmp = std::make_unique<Dog>("Snoopy1");
	return tmp;
}

std::shared_ptr<Dog> get_shard_ptr(){
	std::shared_ptr<Dog> tmp{nullptr};
	tmp = std::make_shared<Dog>(Dog("Snoopy2"));
	return tmp;
}

std::shared_ptr<Dog> get_uniq_to_shard() {
	std::unique_ptr<Dog> tmp = std::make_unique<Dog>("Snoopy3");
	return tmp;
}

int main(int argc, char** argv) {
	std::unique_ptr<int> int_ptr_1{new int{1}};
	// std::shared_ptr<int> shard_int_ptr_1{new int{1}};
	std::shared_ptr<int> shard_int_ptr_1{nullptr};
	std::cout << "shared_int_ptr_1.use_count() : " << shard_int_ptr_1.use_count() << std::endl;

	// shard_int_ptr_1 = int_ptr_1;
	shard_int_ptr_1 = std::move(int_ptr_1);
	std::cout << "shared_int_ptr_1.use_count() : " << shard_int_ptr_1.use_count() << std::endl;
	std::cout << "unique int_ptr_1 : " << std::boolalpha << static_cast<bool>(int_ptr_1) << std::endl;

	std::unique_ptr<int> int_ptr_2{nullptr};
	// int_ptr_2 = std::move(shard_int_ptr_1); // shared to unique is impossible

	std::unique_ptr<Dog> ret1 = get_uniq_ptr();
	std::cout << "get_uniq_ptr ret1 : " << ret1->getName() << std::endl;

	std::shared_ptr<Dog> ret2 = get_shard_ptr();
	std::cout << "get_shard_ptr ret2 : " << ret2->getName() << std::endl;
	std::cout << "reference count : " << ret2.use_count() << std::endl;

	std::shared_ptr<Dog> ret3 = get_uniq_to_shard();
	std::cout << "get_uniq_to_shard ret3 : " << ret3->getName() << std::endl;
	std::cout << "reference count : " << ret3.use_count() << std::endl;

	return 0;
}