#ifndef DOG_H
#define DOG_H

#include <string>
#include <string_view>

class Dog {
public:
	Dog() = default;
	Dog(std::string_view name, std::string_view breed, unsigned age);

	std::string getName();
	unsigned getAge();

	Dog & setName(std::string_view name);
	Dog & setAge(unsigned age);

	void print_info();

private:
	std::string m_name;
	std::string m_breed;
	unsigned m_age{};
};

#endif