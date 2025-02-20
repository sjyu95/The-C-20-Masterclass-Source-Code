#include <iostream>

void show_odds(unsigned long long int); // prototype

int main() {
    show_odds(98723713);

    return 0;
}

void show_odds(unsigned long long int number) {
    unsigned long long quotient{number};
    unsigned long long remainder{0};
    
    while(quotient > 0) {
        remainder = quotient % 10;
        if ((remainder % 2) == 1) {
            std::cout << remainder;
        }
        quotient /= 10;
    }
    
}
