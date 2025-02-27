#include <string>
#include "utils.h"

int main(int argc, char** argv) {
	int a{1}, b{2};
	double c{3.0}, d{4.0};
	std::string e{"hello"}, f{"world"};

	maximum(a,b);
	maximum(c,d);
	maximum(e,f);

	// max(a,c);
	maximum<double>(a,c);
}