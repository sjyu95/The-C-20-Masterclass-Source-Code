#include <iostream>
#include <map>
#include <set>
#include <string>

class Book{
    friend std::ostream& operator<< (std::ostream& os, const Book& book);
public:
    Book() = default;
    Book(int year, std::string_view title) : m_year{year}, m_title{title} {}

    bool operator< (const Book& rhs) const {
        return m_year < rhs.m_year;
    }
private:
    int m_year{};
    std::string m_title;
};

std::ostream& operator<< (std::ostream& os, const Book& book) {
    os << "Book : year: " << book.m_year << ", title: " << book.m_title << std::endl;
    return os;
}

template <typename T>
void Print_multiset(const std::multiset<T> ms) {
    auto it = ms.begin();
    while (it != ms.end()) {
        std::cout << *it;
        ++it;
    }
}

template <typename T, typename U>
void Print_multimap(const std::multimap<T, U> mmap) {
    auto it = mmap.begin();
    while (it != mmap.end()) {
        std::cout << it->first << ": " << it->second << std::endl;
        ++it;
    }
}

int main(int argc, char** argv) {
    std::multiset<int> mset1{1,2,3,4,5,4,3,2,1};
    std::multiset<Book> mset2{Book{1999,"Jain Air"}, Book{1999,"In to the storm"}, Book{2002, "Audition"}};
    Print_multiset(mset2);

    std::multimap<int, Book> mmap1{
        std::make_pair(1, Book{1999, "Jain Air"}),
        std::make_pair(2, Book{1999, "In to the storm"}),
        std::make_pair(3, Book{2002, "Audition"})
    };
    Print_multimap(mmap1);

    return 0;
}