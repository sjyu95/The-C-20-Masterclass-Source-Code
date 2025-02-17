#include <iostream>
#include <string>

int main() {
    std::string message1{"Searcing for Nemo"};
    std::string message2{"Finding"};

    message1.replace(0,12,message2);
    std::cout << message1 << std::endl;

    message2.append(" Fish");
    std::cout << message2 << std::endl;

    std::cout << "before swap : " << message1 << ", " << message2 << std::endl;
    message1.swap(message2);
    std::cout << "after swap : " << message1 << ", " << message2 << std::endl;

    char message3[]{"looking for Fish"};
    std::cout << message3 << std::endl;
    message1.copy(message3, message1.size());
    message3[message1.size()] = '\0';
    std::cout << message3 << std::endl;

    std::cout << "message1 size(" << message1.size() << "), capaity(" << message1.capacity() << std::endl;
    message1.resize(20, '*');
    std::cout << message1 << std::endl;
    std::cout << "message1 size(" << message1.size() << "), capaity(" << message1.capacity() << std::endl;

    message1.resize(5, '*');
    std::cout << message1 << std::endl;
    std::cout << "message1 size(" << message1.size() << "), capaity(" << message1.capacity() << std::endl;

    return 0;
}