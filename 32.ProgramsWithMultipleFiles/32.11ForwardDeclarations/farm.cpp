#include "dog.h"
#include "farm.h"

void Farm::UseDog(const Dog& dog) {
	dog.print();
	mDogCount++;
}