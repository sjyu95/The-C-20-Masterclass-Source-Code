#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
	Person() = default;
	Person(const std::string& firstName, const std::string& lastName, int age);
	~Person();

	Person(const Person& person);

	const std::string& getFirstName() const;
	const std::string& getLastName() const;
	int* getAge() const;

	void setFirstName(const std::string& firstName);
	void setLastName(const std::string& firstName);
	void setAge(int age);

	void printInfo() const;

private:
	std::string m_firstName;
	std::string m_lastName;
	int * m_age{};
};

#endif