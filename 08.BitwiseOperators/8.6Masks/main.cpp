#include <iostream>
#include <bitset>

int main() {
	constexpr unsigned char mask_bit_0{0b00000001};
	constexpr unsigned char mask_bit_1{0b00000010};
	constexpr unsigned char mask_bit_2{0b00000100};
	constexpr unsigned char mask_bit_3{0b00001000};
	constexpr unsigned char mask_bit_4{0b00010000};
	constexpr unsigned char mask_bit_5{0b00100000};
	constexpr unsigned char mask_bit_6{0b01000000};
	constexpr unsigned char mask_bit_7{0b10000000};

	unsigned char value{0b00000000};
	
	value |= mask_bit_0;
	std::cout << "set bit 0 is " << std::bitset<8>(value) << std::endl;

	value &= (~mask_bit_0);
	std::cout << "reset bit 0 is " << std::bitset<8>(value) << std::endl;

	value |= (0b11111111);
	std::cout << "all set is " << std::bitset<8>(value) << std::endl;

	value &= (~0b11111111);
	std::cout << "all reset is " << std::bitset<8>(value) << std::endl;

	value |= mask_bit_5;
	value >>= 5;
	std::cout << std::boolalpha;
	std::cout << "check 5 bit status is " << static_cast<bool>(value) << std::endl;

	std::cout << "value is " << std::bitset<8>(value) << std::endl;
	value ^= mask_bit_0;
	std::cout << "toggle bit 0 is " << std::bitset<8>(value) << std::endl;

	return 0;
}