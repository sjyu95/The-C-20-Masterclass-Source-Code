#ifndef DOG_H
#define DOG_H

#include <string>

class Dog {
public:
	Dog(std::string_view name);
	void print() const;
private:
	std::string mName;
};

#endif