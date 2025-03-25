#include <iostream>

class Base {
public:
    Base() = default;
    Base(int num) : m_value{num} { }
    virtual ~Base() = default;

    virtual void setup() {
        std::cout << "Base::setup()" << std::endl;
    }
    virtual void clean() {
        std::cout << "Base::clean()" << std::endl;
    }
    int getValue() const {
        return m_value;
    }

protected:
    int m_value{};
};

class Derived : public Base {
public:
    Derived() = default;
    Derived(int num) : Base(num) { /*setup();*/}
    ~Derived() { /*clean();*/ }

    void setup() override {
        m_value=100;
        std::cout << "Derivied::setup() and value = 100" << std::endl;
    }
    void clean() override {
        m_value=-1;
        std::cout << "Derived::clean() and value = -1" << std::endl;
    }
};

int main(int argc, char** argv) {
    Base* pBase {new Derived};

    pBase->setup();
    std::cout << "getValue : " << pBase->getValue() << std::endl;
    pBase->clean();
    std::cout << "getValue : " << pBase->getValue() << std::endl;

    delete pBase;

    return 0;
}