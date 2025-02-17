#include <iostream>
#include <string> // for to_string

int main() {
	std::string message1{"Hello"}, message2("world");
	
	// std::string message3 = message1 + ', ' + message2 + '!';
	std::string message3 = message1 + ", " + message2 + "!";
	std::cout << message3 << std::endl;

	const char message5[]{"My name is"};
	const char * message6{"Sejung Yoo"};
	// std::string message7 = message5 + message6;
	std::string message7 = std::string(message5) + std::string(" ") + message6;
	std::cout << message7 << std::endl;
	std::string message8 = std::string(message5).append(" ").append(message6);
	std::cout << message8 << std::endl;
	std::string message9 = std::string(message5).append(" ").append(message6, 7, 3);
	std::cout << message9 << std::endl;

	std::string message10;
	std::cout << "(" << message10 << ")" << std::endl;
	message10 = message10.append(std::to_string(12)) + "/" + std::to_string(27);
	std::cout << message10 << std::endl;

	std::string message11;
	{
		using namespace std::string_literals;
		message11 = "aaa"s + "bbb";
		std::cout << message11 << std::endl;
	}

	return 0;
}