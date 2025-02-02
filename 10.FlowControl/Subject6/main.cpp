#include <iostream>

int main(){
    int value{0};
    std::cout << "Which day is today [1 : Monday,..., 7 : Sunday] : " << std::endl;
    std::cin >> value;

    switch(value){
        case 1: {
            std::cout << "Today is Monday.";
            break;
        }
        case 2: {
            std::cout << "Today is Thusday.";
            break;
        }
        case 3: {
            std::cout << "Today is Wednesday.";
            break;
        }
        case 4: {
            std::cout << "Today is Thursday.";
            break;
        }
        case 5: {
            std::cout << "Today is Friday.";
            break;
        }
        case 6: {
            std::cout << "Today is Saturday.";
            break;
        }
        case 7: {
            std::cout << "Today is Sunday.";
            break;
        }
        default: {
            std::cout << value << " is not a valid day. Bye!" << std::endl;
            return 0;
        }
    }

    std::cout << "Let's have some fun." << std::endl;

    return 0;
}