#include <iostream>
#include <typeinfo>
#include "nonpolymorphic.h"
#include "polymorphic.h"

int main() {
	std::cout << std::boolalpha;
	std::cout << "typeid(int) == typeid(1) : " << (typeid(int) == typeid(1)) << std::endl;
	std::cout << "typeid(int) == typeid(1f) : " << (typeid(int) == typeid(1.0f)) << std::endl;

	DynamicBase* pBase {new DynamicDerived};
	pBase->print();
	std::cout << "typeid(pBase) : " << typeid(pBase).name() << std::endl;
	std::cout << "typeid(*pBase) : " << typeid(*pBase).name() << std::endl;

	StaticBase* pBase2 {new StaticDerived};
	pBase2->print();
	std::cout << "typeid(pBase2) : " << typeid(pBase2).name() << std::endl;
	std::cout << "typeid(pBase2) : " << typeid(*pBase2).name() << std::endl;

	return 0;
}