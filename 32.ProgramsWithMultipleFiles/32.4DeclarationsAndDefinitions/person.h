#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <string_view>

class Person {
public:
	Person(std::string_view name, int age);
	void printInfo();

	static int sCallCount;
private:
	std::string m_name;
	int m_age{};
};

#endif