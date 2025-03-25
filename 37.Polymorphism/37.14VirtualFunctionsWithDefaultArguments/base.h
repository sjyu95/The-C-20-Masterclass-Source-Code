#ifndef BASE_H
#define BASE_H

class Base {
public:
    Base() = default;
    virtual ~Base() = default;

    virtual double Add(double a = 5, double b = 5) const {
        return a + b + 1;
    }

private:
};

#endif