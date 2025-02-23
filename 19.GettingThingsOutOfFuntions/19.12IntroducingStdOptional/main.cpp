#include <iostream>
#include <optional>

int main(int argc, char** argv) {
	std::optional<std::string> str_val{"Hello world~"};
	std::optional<int> int_val{std::nullopt};
	std::optional<char> char_val{'c'};

	char_val = 'd';
	int_val = 1;
	str_val = "Hello~";

	if (char_val.has_value()) {
		std::cout << char_val.value() << std::endl;
	}
	if (int_val != std::nullopt) {
		std::cout << *int_val << std::endl;
	}
	if (str_val.has_value()) {
		std::cout << "value is " << str_val.value() << std::endl;
		std::cout << "str_val's address is " << &str_val << std::endl;
		std::cout << "value's address is " << &(*str_val) << std::endl;
	}

	return 0;
}