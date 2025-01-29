#include <iostream>
#include <bitset>
#include <iomanip>

int main() {
	unsigned char val1{0b00000011};
	unsigned char val2{0b00000101};

	std::cout << "val1 : " << std::bitset<8>(val1) << std::endl;
	std::cout << "val2 : " << std::bitset<8>(val2) << std::endl;
	std::cout << std::endl;

	std::cout << std::setw(18) << "bitwise & : " << std::setw(12) <<  std::bitset<8>(val1 & val2) << std::endl;
	std::cout << std::setw(18) << "bitwise | : " << std::setw(12) <<  std::bitset<8>(val1 | val2) << std::endl;
	std::cout << std::setw(18) << "bitwise ~val1 : " << std::setw(12) <<  std::bitset<8>(~val1) << std::endl;
	std::cout << std::setw(18) << "bitwise ~val2 : " << std::setw(12) <<  std::bitset<8>(~val2) << std::endl;
	std::cout << std::setw(18) << "bitwise ^ : " << std::setw(12) <<  std::bitset<8>(val1 ^ val2) << std::endl;

	return 0;
}