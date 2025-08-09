#include <functional>
#include <iostream>
#include <map>
#include <string>

class Book {
    friend std::ostream& operator<< (std::ostream& os, const Book& rhs);
public:
    Book() = default;
    Book(int year, std::string_view title) : m_year{year}, m_title{title} {}

    bool operator< (const Book& book) const { return m_year < book.m_year; }
private:
    int m_year{};
    std::string m_title;
};

std::ostream& operator<< (std::ostream& os, const Book& rhs) {
    os << "{ year : " << rhs.m_year << ", title : " << rhs.m_title << " } " << std::endl;
    return os;
}

template <typename T, typename U>
void PrintCollection(const std::map<T, U>& coll) {
    auto it = coll.begin();
    while (it != coll.end()) {
        std::cout << (*it).first << " : " << (*it).second << std::endl;
        ++it;
    }
}

class CompareInt {
public:
    bool operator() (int lhs, int rhs) const {
        return lhs > rhs;
    }
};

bool CompareFunc(int a, int b) {
    return a > b;
}

int main() {
    std::map<int, Book> map1{{1, Book{1996, "Jain Air"}}, {2, Book{1879, "Hill of storm"}}, {3, Book{2002, "World war z"}}};

    std::cout << "size : " << map1.size() << std::endl;
    PrintCollection(map1);

    std::cout << std::endl;
    map1.emplace(std::pair<int, Book>{4, Book{2025, "Network"}});
    PrintCollection(map1);

    std::cout << std::endl;
    std::map<int, Book> map2{{100, Book{1, "New bible"}}};
    PrintCollection(map2);

    map1.swap(map2);
    PrintCollection(map1);
    PrintCollection(map2);

    std::cout << std::endl;
    std::map<int, int, std::greater<int>> map3{{1,100}, {2,200}, {3,300}};
    for (auto e : map3) {
        std::cout << e.first << ": " << e.second << std::endl;
    }

    std::cout << std::endl;
    std::map<int, int, std::less<int>> map4{{1,100}, {2,200}, {3,300}};
    for (auto e : map4) {
        std::cout << e.first << ": " << e.second << std::endl;
    }

    std::cout << std::endl;
    std::map<int, int, CompareInt> map5{{1,100}, {2,200}, {3,300}};
    for (auto e : map5) {
        std::cout << e.first << ": " << e.second << std::endl;
    }

    std::cout << std::endl;
    std::function<bool (int, int)> func = &CompareFunc; // run time object
    std::map<int, int,  decltype(func)> map6(func);
    map6.insert({1,100});
    map6.insert({2,200});
    map6.insert({3,300});
    for (auto e : map6) {
        std::cout << e.first << ": " << e.second << std::endl;
    }

    std::cout << std::endl;
    std::map<int, int,  bool(*)(int, int)> map7(CompareFunc); // function pointer
    map7.insert({1,100});
    map7.insert({2,200});
    map7.insert({3,300});
    for (auto e : map7) {
        std::cout << e.first << ": " << e.second << std::endl;
    }

    std::cout << std::endl;
    auto func2 = [](int a, int b) { return a < b; }; // lambda
    std::map<int, int,  decltype(func2)> map8(func2);
    map8.insert({1,100});
    map8.insert({2,200});
    map8.insert({3,300});
    for (auto e : map8) {
        std::cout << e.first << ": " << e.second << std::endl;
    }

    return 0;
}