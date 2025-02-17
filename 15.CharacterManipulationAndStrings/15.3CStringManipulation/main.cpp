#include <iostream>
// #include <cstring>

int main() {
    const char * message{ "These are C++ classes. These are interesting." };
    char message2[] { "These are C++ classes. These are interesting." };

    std::cout << "message strlen : " << std::strlen(message) << std::endl;
    std::cout << "message pointer length : " << sizeof(message) << std::endl;

    std::cout << "message2 strlen (except null terminator) : " << std::strlen(message2) << std::endl;
    std::cout << "message2 array length (with null terminator) : " << sizeof(message2) << std::endl;

    const char * word1{"alabama"};
    char word2[]{"balabama"};
    std::cout << "strcmp (" << word1 << "), " << word2 << " : " << std::strcmp(word1, word2) << std::endl;
    
    word1 = "clabama";
    std::cout << "strcmp (" << word1 << "), " << word2 << " : " << std::strcmp(word1, word2) << std::endl;

    word1 = word2;
    std::cout << "strcmp (" << word1 << "), " << word2 << " : " << std::strcmp(word1, word2) << std::endl;
    std::cout << "word1 address : " << &word1 << ", word2 address : " << &word2 << std::endl;

    if (std::strncmp("aaabcd", "bbbbcd", 3)) {
        std::cout << "first 3 characters are same" << std::endl;
    }

    size_t iteration{};
    const char * result{message2};
    std::cout << "result address(" << &result << "), message2 address(" << &message2 << std::endl;
    
    while (auto search = std::strchr(result, 'T') != nullptr) {
        std::cout << "search T : " << search << std::endl;
        iteration++;result++;
    }
    std::cout << iteration << " are founded" << std::endl;

    result = message2;
    iteration = 0;
    while (auto search = std::strrchr(result, 'T') != nullptr) {
        std::cout << "reverse search T : " << search << std::endl;
        iteration++;result++;
    }
    std::cout << iteration << " are founded" << std::endl;


    return 0;
}