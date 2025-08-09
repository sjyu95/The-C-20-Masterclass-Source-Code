#include <iostream>
#include <queue>
#include <vector>

class Book {
    friend std::ostream& operator<<(std::ostream& os, const Book& book);
public:
    Book() = default;
    Book(int year, std::string_view title) : m_year(year), m_title(title) {}

    bool operator< (const Book& rhs) const {
        // return this->m_year < rhs.m_year;
        // return this->m_year > rhs.m_year;
        return this->m_title < rhs.m_title;
    }
private:
    int m_year{0};
    std::string m_title;
};

std::ostream& operator<<(std::ostream& os, const Book& book) {
    os << "year : " << book.m_year << ", title : " << book.m_title << std::endl;
    return os;
}

template <typename T, typename Container = std::vector<T>, typename Compare = std::less<typename Container::value_type>>
void PrintQueue(std::priority_queue<T, Container, Compare> q) {
    std::cout << "print_priority_queue : size(" << q.size() << ") [";
    while (!q.empty()) {
        std::cout << q.top() << ", ";
        q.pop();
    }
    std::cout << "]" << std::endl;
}

template <typename T, typename Container = std::vector<T>, typename Compare = std::less<typename Container::value_type>>
void ClearQueue(std::priority_queue<T, Container, Compare> q) {
    std::cout << "clear_priority_queue : size(" << q.size() << ") [";
    while (!q.empty()) {
        q.pop();
    }
    std::cout << "]" << std::endl;
}

int main(int argc, char** argv) {
    std::priority_queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    PrintQueue(q1);

    std::vector<int> v2{1,2,3,4,5};
    std::priority_queue<int> q2(v2.begin(), v2.end());
    PrintQueue(q2);

    ClearQueue(q2);
    PrintQueue(q2);

    std::priority_queue<Book> b1;
    b1.push(Book{1997, "AAAA"});
    b1.push(Book{2001, "BBBB"});
    b1.push(Book{2021, "CCCC"});
    PrintQueue(b1);

    auto comp = [](Book a, Book b) {return a < b;};

    std::priority_queue<Book, std::deque<Book>, decltype(comp)> b2;
    b2.push(Book{997, "XXXX"});
    b2.push(Book{1001, "YYYY"});
    b2.push(Book{1021, "ZZZZ"});

    PrintQueue(b2);

    return 0;
}