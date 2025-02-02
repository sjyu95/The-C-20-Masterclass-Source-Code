#include <iostream>

std::string getDateString(int date) {
    switch(date) {
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday";
        case 4: return "Thursday";
        case 5: return "Friday";
        case 6: return "Saturday";
        case 7: return "Sunday";
        default: return "";
    }
}

int main(){
    int today{0}, diff{0}, past{0};
    
    std::cout << "Which day is today [1 : Monday,..., 7 : Sunday] : " << std::endl;
    std::cin >> today;
    
    if (today < 1 || today > 7) {
        std::cout << today << " is not a valid day. Bye!" << std::endl;
        return 0;
    }

    std::cout << "How many days have passed up to today : " << std::endl;
    std::cin >> diff;

    std::cout << "Today is " << getDateString(today) << std::endl;

    past = 7 - ((diff - today) % 7);
    std::cout << "If we went " << diff << " days in the past we would hit a " << getDateString(past) << std::endl;

    return 0;
}