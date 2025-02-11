#include <iostream>

int main() {
	const int num{1};
	// int & r_num{num};
	const int & r_num{num};

	// r_num = 1;
	int num2{2};
	// r_num = num2;

	const int * const p_num{&num};
	// *p_num = num2;
	// p_num = &num2;

	return 0;
}