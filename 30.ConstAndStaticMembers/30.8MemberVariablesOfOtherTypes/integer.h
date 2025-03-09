#ifndef INTEGER_H
#define INTEGER_H

class Integer {
public:
	Integer() = default;
	explicit Integer(int value);

	int get() const;
	void set(int value);

private:
	int m_integer{};
};

#endif