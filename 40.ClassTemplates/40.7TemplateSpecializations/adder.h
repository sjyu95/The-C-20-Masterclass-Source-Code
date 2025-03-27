#ifndef ADDER_H
#define ADDER_H

#include <cstring>
#include <iostream>

template <typename T>
class Adder {
public:
	Adder() = default;

	void do_something() const {
		std::cout << "call do_something.." << std::endl;
	}
	// T add(T a, T b) const {
	// 	return a+b;
	// }
	T add(T a, T b) const;
private:
};

template <typename T>
T Adder<T>::add(T a, T b) const {
	return a+b;
}

template <>
class Adder<char *> {
public:
	Adder() = default;

	// char * add(char * a, char * b) const {
	// 	return std::strcat(a, b);
	// }
	char * add(char* a, char*b) const;
};

inline char* Adder<char *>::add(char* a, char* b) const {
	return std::strcat(a,b);
}

#endif