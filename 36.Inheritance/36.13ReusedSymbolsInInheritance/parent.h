#ifndef PARENT_H
#define PARENT_H

class Parent {
public:
    Parent() = default;
    Parent(int member) : m_member(member) {}

    void print_member_value() {
        std::cout << "parent: member value is " << m_member << std::endl;
    }
protected:
    int m_member{};
};

#endif