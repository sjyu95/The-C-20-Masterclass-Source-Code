#include <iostream>

enum class Month /*: unsigned char */ {
    Jan = 1, January = Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

std::string_view GetMonthString(Month month) {
    switch (month) {
        using enum Month;
        case Jan: return "January";
        case Feb: return "Feburary";
        case Mar: return "March";
        case Apr: return "April";
        case May: return "May";
        case Jun: return "June";
        case Jul: return "July";
        case Aug: return "Aug";
        case Sep: return "September";
        case Oct: return "October";
        case Nov: return "November";
        case Dec: return "December";
        default: return "Not found"; 
    }
}

int main() {
    Month month{Month::Jul};
    std::cout << "month is " << GetMonthString(month) << std::endl;

    return 0;
}