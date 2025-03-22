#include <iostream>
#include "civilengineer.h"

int main() {
	CivilEngineer ce1{"nc", "Sejung", "Yoo", "civil"};
	ce1.Print();
	std::cout << "----------" << std::endl;
	CivilEngineer ce2{ce1};
	ce2.Print();

	return 0;
}