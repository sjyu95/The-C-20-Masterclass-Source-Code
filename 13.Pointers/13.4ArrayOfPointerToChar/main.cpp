#include <iostream>

int main() {
    constexpr size_t MAX_NAME_LENGTH{20};

    const char * prediction[] = { 
        "a lot of kinds running in the backyard!",
        "a lot of empty beer bootles on your work table.",
        "you Partying too much with kids wearing weird clothes.",
        "you running away from something really scary",
        "clouds gathering in the sky and an army standing ready for war",
        "dogs running around in a deserted empty city",
        "a lot of cars stuck in a terrible traffic jam",
        "you sitting in the dark typing lots of lines of code on your dirty computer",
        "you yelling at your boss. And oh no! You get fired!",
        "you laughing your lungs out. I've never seen this before."
    };

    std::cout << "I'm Fourtune Teller." << std::endl;
    std::cout << "What's your name? " << std::endl;

    char name[MAX_NAME_LENGTH]{};
    std::cin.getline(name, MAX_NAME_LENGTH); // Caution

    bool end{false};
    char go_on{};

    std::srand(std::time(0)); // Caution
    
    while (!end) {
        std::cout << "Welcome " << name << std::endl;
        std::cout << prediction[std::rand() % 10] << std::endl;
        
        std::cout << "Continue? (y or n) : ";
        std::cin >> go_on;
        end = (go_on == 'Y' || go_on == 'y') ? false : true;
    }

    return 0;
}