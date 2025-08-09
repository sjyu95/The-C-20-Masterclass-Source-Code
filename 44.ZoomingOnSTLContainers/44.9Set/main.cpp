#include <iostream>
#include <set>
#include <string>

class CompareByYear;

class Book {
    friend std::ostream& operator<< (std::ostream& os, const Book& rhs);
    friend CompareByYear;
public:
    Book() = default;
    Book(int year, std::string_view title) : m_year{year}, m_title{title} {}

    bool operator< (const Book& book) const { return m_year < book.m_year; }
private:
    int m_year{};
    std::string m_title;
};

std::ostream& operator<< (std::ostream& os, const Book& rhs) {
    os << "year : " << rhs.m_year << ", title : " << rhs.m_title << std::endl;
    return os;
}

template <typename T>
void PrintCollection(const std::set<T>& coll) {
    auto it = coll.begin();
    while (it != coll.end()) {
        std::cout << *it << ", ";
        ++it;
    }
}

class CompareByYear {
public:
    bool operator() (const Book& lhs, const Book& rhs) const {
        return lhs.m_year > rhs.m_year;
    }
};

int main() {
    std::set<int> set1{1,2,3,4,5};

    std::cout << "size : " << set1.size() << std::endl;
    for (auto e : set1) {
        std::cout << e;
    }

    std::cout << std::endl;
    set1.emplace(0);
    PrintCollection(set1);

    std::cout << std::endl;
    std::set<Book> set2{Book{1996, "Herry Porter"}, Book{1876, "Hill of storm"}};
    PrintCollection(set2);

    std::cout << std::endl;
    set2.insert(Book(1, "Bible"));
    PrintCollection(set2);

    std::cout << std::endl;
    std::set<int, std::greater<int>> set3{1,2,3,4,5};
    for (auto e : set3) {
        std::cout << e;
    }
    auto result = set3.insert(5);
    std::cout << std::boolalpha << "result : " << result.second << std::endl;

    std::cout << std::endl;
    std::set<int, std::less<int>> set4{1,2,3,4,5};
    for (auto e : set4) {
        std::cout << e;
    }

    std::cout << std::endl;
    std::set<Book> set5{Book{1996, "Herry Porter"}, Book{1876, "Hill of storm"}};
    PrintCollection(set5);

    std::cout << std::endl;
    std::set<Book, CompareByYear> set6{Book{1996, "Herry Porter"}, Book{1876, "Hill of storm"}};
    for (auto e : set6){
        std::cout << e ;
    }

    return 0;
}