#include <iostream>

int main() {
    constexpr size_t MAX_NAME_LENGTH{20};

    constexpr char prediction0[]{ "a lot of kinds running in the backyard!" };
    constexpr char prediction1[]{ "a lot of empty beer bootles on your work table." };
    constexpr char prediction2[]{ "you Partying too much with kids wearing weird clothes." };
    constexpr char prediction3[]{ "you running away from something really scary" };
    constexpr char prediction4[]{ "clouds gathering in the sky and an army standing ready for war" };
    constexpr char prediction5[]{ "dogs running around in a deserted empty city" };
    constexpr char prediction6[]{ "a lot of cars stuck in a terrible traffic jam" };
    constexpr char prediction7[]{ "you sitting in the dark typing lots of lines of code on your dirty computer" };
    constexpr char prediction8[]{ "you yelling at your boss. And oh no! You get fired!" };
    constexpr char prediction9[]{ "you laughing your lungs out. I've never seen this before." };

    std::cout << "I'm Fourtune Teller." << std::endl;
    std::cout << "What's your name? " << std::endl;

    char name[MAX_NAME_LENGTH]{};
    std::cin.getline(name, MAX_NAME_LENGTH); // Caution

    bool end{false};
    char go_on{};

    std::srand(std::time(0)); // Caution
    
    while (!end) {
        std::cout << "Welcome " << name << std::endl;

        int selected{std::rand() % 10}; // Caution
        switch (selected) {
            case 0:
                std::cout << prediction0 << std::endl;
                break;
            case 1:
                std::cout << prediction1 << std::endl;
                break;
            case 2:
                std::cout << prediction2 << std::endl;
                break;
            case 3:
                std::cout << prediction3 << std::endl;
                break;
            case 4:
                std::cout << prediction4 << std::endl;
                break;
            case 5:
                std::cout << prediction5 << std::endl;
                break;
            case 6:
                std::cout << prediction6 << std::endl;
                break;
            case 7:
                std::cout << prediction7 << std::endl;
                break;
            case 8:
                std::cout << prediction8 << std::endl;
                break;
            case 9:
                std::cout << prediction8 << std::endl;
                break;
            default:
                std::cout << "Unfortunatly, not selected..";
        }

        std::cout << "Continue? (y or n) : ";
        std::cin >> go_on;
        end = (go_on == 'Y' || go_on == 'y') ? false : true;
    }

    return 0;
}