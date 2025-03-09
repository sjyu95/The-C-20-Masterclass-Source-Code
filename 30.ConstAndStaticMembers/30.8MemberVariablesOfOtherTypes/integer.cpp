#include "integer.h"

Integer::Integer(int value) : m_integer(value) {}

int Integer::get() const {
	return m_integer;
}
void Integer::set(int value) {
	m_integer = value;
}