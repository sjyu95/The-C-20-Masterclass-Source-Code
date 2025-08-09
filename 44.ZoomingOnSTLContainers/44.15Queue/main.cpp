#include <iostream>
#include <list>
#include <queue>
#include <string>

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

template<typename T, typename C = std::deque<T>>
void PrintQueue(std::queue<T, C> s) {
    std::cout << "[";
    while (!s.empty()){
        std::cout << s.front() << ", ";
        s.pop();
    }
    std::cout << "]" << std::endl;
}

template<typename T>
void ClearQueue(std::queue<T>& s) {
    while(!s.empty()) {
        s.pop();
    }
}

int main(int argc, char** argv) {
    std::queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);

    q1.front() = 100;
    q1.back() = 999;

    PrintQueue(q1);
    ClearQueue(q1);
    PrintQueue(q1);

    std::deque<int> d1{1,2,3,4,5};
    std::queue<int, std::deque<int>> q100{d1};
    PrintQueue(q100);

    std::list<int> l1{1,2,3,4,5};
    std::queue<int, std::list<int>> q101{l1};
    PrintQueue(q101);

    std::queue<Book> bookqueue;
    bookqueue.push(Book{1996, "Jain Air"});
    bookqueue.push(Book{2001, "Into the stome"});
    PrintQueue(bookqueue);

    bookqueue.emplace(2022, "Air");
    PrintQueue(bookqueue);
}