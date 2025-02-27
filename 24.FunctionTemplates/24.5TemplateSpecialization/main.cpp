#include <iostream>
#include <string>
#include "utils.h"

int main(int argc, char** argv) {
	int a{1}, b{2};
	double c{3.0}, d{4.0};
	std::string e{"hello"}, f{"world"};

	std::cout << "max of a,b : " <<  maximum(a,b) << std::endl;
	std::cout << "max of c,d : " << maximum(c,d) << std::endl;
	std::cout << "max of e,f : " << maximum(e,f) << std::endl;
	
	const char * g{"WORLD"}, *h{"BEAUTIFUL"};
	std::cout << "max of g,h : " << maximum(g,h) << std::endl;

	return 0;
}