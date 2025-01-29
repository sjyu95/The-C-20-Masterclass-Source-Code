
#include <iostream>
#include <bitset>
#include <iomanip>

int main() {
	constexpr int WIDTH{18};

	unsigned char value{0b00110010};
	std::cout << std::setw(WIDTH) << "value : " << std::bitset<8>(value) << std::endl;

	value <<= 1;
	std::cout << std::setw(WIDTH) << "bitwise << : " << std::bitset<8>(value) << std::endl;

	value >>= 1;
	std::cout << std::setw(WIDTH) << "bitwise >> : " << std::bitset<8>(value) << std::endl;

	value &= 0b00001111;
	std::cout << std::setw(WIDTH) << "bitwise & : " << std::bitset<8>(value) << std::endl;
	
	value |= 0b00001111;
	std::cout << std::setw(WIDTH) << "bitwise | : " << std::bitset<8>(value) << std::endl;
	
	value ^= 0b00001111;
	std::cout << std::setw(WIDTH) << "bitwise ^ : " << std::bitset<8>(value) << std::endl;

	return 0;
}