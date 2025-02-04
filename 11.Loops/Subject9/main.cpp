#include <iostream>
#include <iomanip>

int main() {
    unsigned year{};
    unsigned day_of_week{};
    unsigned last_day_of_month{};

    std::cout << "Enter a year : ";
    std::cin >> year;
    std::cout << "Enter the first day of year [1: Monday, ... 7:Sunday]: ";
    std::cin >> day_of_week;
    std::cout << std::endl << "Calenda for 2020" << std::endl;

    for (auto month{0}; month < 12; ++month) {
        switch (month) {
            case 0:
                std::cout << "--January ";
                last_day_of_month = 31;
                break;
            case 1:
                std::cout << "--February ";
                if (((year % 4) == 0 && (year % 100) != 0) || ((year % 400) == 0)) {
                    last_day_of_month = 29;
                } else {
                    last_day_of_month = 28;
                }
                break;
            case 2:
                std::cout << "--March ";
                last_day_of_month = 31;
                break;
            case 3:
                std::cout << "--Aprial ";
                last_day_of_month = 30;
                break;
            case 4:
                std::cout << "--May ";
                last_day_of_month = 31;
                break;
            case 5:
                std::cout << "--Jun ";
                last_day_of_month = 30;
                break;
            case 6:
                std::cout << "--July ";
                last_day_of_month = 31;
                break;
            case 7:
                std::cout << "--August ";
                last_day_of_month = 31;
                break;
            case 8:
                std::cout << "--September ";
                last_day_of_month = 30;
                break;
            case 9:
                std::cout << "--October ";
                last_day_of_month = 31;
                break;
            case 10:
                std::cout << "--November ";
                last_day_of_month = 30;
                break;
            case 11:
                std::cout << "--December ";
                last_day_of_month = 31;
                break;
        }
        std::cout << year << " --" << std::endl;
        
        std::cout << std:: setw(5) << "Mon" << std:: setw(5) << "Tue" << std:: setw(5) << "Wed" << std:: setw(5) << "Thu" << std:: setw(5) << "Fri" << std:: setw(5) << "Sat" << std:: setw(5) << "Sun" << std::endl;
    
        auto day{0};
        auto curr_week_days{0};
        constexpr size_t max_week_days{7};

        do {
            ++curr_week_days;

            size_t i{0};
            if (!day && curr_week_days < day_of_week) { // first week
                std::cout << "     ";
                continue;
            }

            std::cout << std::setw(5) << ++day;

            if (curr_week_days == max_week_days) {
                std::cout << std::endl;
                curr_week_days = 0;
                if (day != last_day_of_month)
                    continue;
            }
            
            if (day == last_day_of_month) {
                std::cout << std::endl;
                day_of_week = curr_week_days + 1;

                break;
            }

        } while (day <= last_day_of_month);

        std::cout << std::endl;
    }
    
    return 0;
}