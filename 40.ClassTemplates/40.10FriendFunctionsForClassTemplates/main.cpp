#include <iostream>

// forward declairation
template <typename T>
class TemplateClass;

template <typename T>
void some_func(TemplateClass<T> obj);

template <typename T>
class TemplateClass {
    friend void some_func<T>(TemplateClass<T> obj);
public:
    TemplateClass() = default;
    void set(T a) { m_val = a; }
private:
    T m_val{};
};

template <typename T>
void some_func<T>(TemplateClass<T> obj) {
    std::cout << "called some function.. m_value : " << obj.m_val << std::endl;
}

int main() {
    TemplateClass<int> temp;
    temp.set(10);
    some_func(temp);
    return 0;
}