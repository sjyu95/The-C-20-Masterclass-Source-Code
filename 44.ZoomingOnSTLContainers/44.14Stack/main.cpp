#include <deque>
#include <list>
#include <iostream>
#include <stack>
#include <string>
#include <vector>

class Book {
    friend std::ostream& operator<< (std::ostream& os, const Book& book);
public:
    Book() = default;
    Book(int year, std::string_view title) : m_year{year}, m_title{title} {}
private:
    int m_year{0};
    std::string m_title;
};

std::ostream& operator<< (std::ostream& os, const Book& book) {
    os << "year : " << book.m_year << ", title : " << book.m_title << std::endl;
    return os;
}

// template<typename T, typename Container = std::vector<T>>
template<typename T, typename Container>
void PrintStack(std::stack<T, Container> s) {
// void PrintStack(std::stack<T> s) {
    std::cout << "[";
    while (!s.empty()){
        std::cout << s.top() << ", ";
        s.pop();
    }
    std::cout << "]" << std::endl;
}

template<typename T>
void ClearStack(std::stack<T>& s) {
    while(!s.empty()) {
        s.pop();
    }
}

int main(int argc, char** argv) {
    std::stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    PrintStack(s1);
    ClearStack(s1);
    PrintStack(s1);

    std::stack<int, std::vector<int>> s2;
    s2.push(11);
    s2.push(22);
    s2.push(33);
    PrintStack(s2);

    s2.top() = 100;
    PrintStack(s2);

    std::deque<int> d1{1,2,3,4,5};
    std::stack<int, std::deque<int>> s100{d1};
    PrintStack(s100);

    std::list<int> l1{1,2,3,4,5};
    std::stack<int, std::list<int>> s101{l1};
    PrintStack(s101);

    std::stack<Book> bookStack;
    bookStack.push(Book{1996, "Jain Air"});
    bookStack.push(Book{2001, "Into the stome"});
    PrintStack(bookStack);

    bookStack.emplace(2022, "Air");
    PrintStack(bookStack);
}