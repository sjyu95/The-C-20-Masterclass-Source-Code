#ifndef DOG_H
#define DOG_H

#include <string>
#include <string_view>

class Dog {
public:
	Dog() = default;
	Dog(std::string_view name, std::string_view breed, unsigned age);

	std::string& name();
	// std::string& name() const;
	const std::string& name() const;
	unsigned& age();
	const unsigned& age() const;

	void print_info();
	void print_info() const;

private:
	std::string m_name;
	std::string m_breed;
	unsigned m_age{};
   mutable unsigned m_call_count{};
   // unsigned m_call_count{};
};

#endif