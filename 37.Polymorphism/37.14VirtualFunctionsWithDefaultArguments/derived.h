#ifndef DERIVED_H
#define DERIVED_H

class Derived : public Base {
public:
    Derived() = default;

    double Add (double a = 10, double b = 10) const override {
        return a + b + 2;
    }
private:
};

#endif