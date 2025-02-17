#include <iostream>

int main() {
    std::string message1{"Say hello"};
    std::string message2{message1};
    std::string message3{message1};

    std::cout << "message1 address is " << &message1 << std::endl;
    std::cout << "message2 address is " << &message2 << std::endl;
    std::cout << "message3 address is " << &message3 << std::endl;

    std::string_view view_message2{message1};

    std::cout << "message1 address is " << &message1 << std::endl;
    std::cout << "view_message2 is " << view_message2.data() << std::endl;
    std::cout << "view_message2's address is " << &view_message2 << std::endl;
    std::cout << "view_message2's data's address is " << (void *)view_message2.data() << std::endl;

    std::string_view view_message3{message1};
    std::cout << "substring is " << view_message2.substr(0, 2) << std::endl;
    std::cout << "front is " << view_message2.front() << ", back is " << view_message2.back() << std::endl;

    std::string_view view_message4{};
    {
        std::string a{"test"};
        view_message4 = a;
       std::cout << "view_message4 is " << view_message4 << std::endl;
    }
    std::cout << "view_message4 is " << view_message4 << std::endl;

    const char * array{"abcde"};
    char array2[]{'a', 'b', 'c'}; // not null-terminated
    char array3[]{"abc"};

    std::string_view message4{array};
    std::string_view message5{array2, 2};
    std::string_view message6{array3};

    std::cout << "array is " << array << std::endl;
    std::cout << "array2 is " << array2 << std::endl;
    std::cout << "array3 is " << array3 << std::endl;
    
    array2[0] = '\0';
    std::cout << "array2 is " << array2 << std::endl;
    array2[0] = 't';    
    std::cout << "message5 is " << message5 << std::endl;
    
    return 0;
}