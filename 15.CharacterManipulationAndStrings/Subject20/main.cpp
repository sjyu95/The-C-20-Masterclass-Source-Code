#include <iostream>
#include <cstring>

void extract_message( const char * src1, const char * src2, const char * src3, const char * src4) {
    char* result;
    result = new char[20]{}; // Dynamically allocate for space
    
    //Don't modify anything above this line
    //Your code will go below this line
    std::cout << "result : (" << result << ")" << std::endl;
    std::strncpy(result, src1+15, 3);
    std::cout << "result : (" << result << ")" << std::endl;
    std::cout << "src1+15 : (" << src1+15 << ")" << std::endl;

    std::cout << "result+3 : (" << result+3 << ")" << std::endl;
    std::strncpy(result+3, src2+5, 4);
    std::cout << "result+3 : (" << result+3 << ")" << std::endl;
    std::cout << "src2+5 : (" << src2+5 << ")" << std::endl;

    std::cout << "result+7 : (" << result+7 << ")" << std::endl;
    std::strncpy(result+7, src3+10, 3);
    std::cout << "result+7 : (" << result+7 << ")" << std::endl;
    std::cout << "src3+10 : (" << src3+10 << ")" << std::endl; 

    std::strncpy(result+10, src4+3, 5);
    std::cout << "result+10 : (" << result+10 << ")" << std::endl;
    std::cout << "src4+3 : (" << src4+3 << ")" << std::endl; 

    result[15] = '\0';
    
    std::cout << "result : " << result;
    
    //Your code will go above this line
    //Don't modify anything below this line

    delete[] result;
}

void extract_message2( const char * src1, const char * src2, const char * src3, const char * src4) {
    char * result;
    result = new char[20]{}; // Dynamically allocate for space
    size_t index{};
    
    std::strncpy(result, src1+15, 3);
    index += 3;
    result[index++] = ' ';
    
    std::strncpy(result+index, src2+6, 3);
    index += 3;
    result[index++] = ' ';

    std::strncpy(result+index, src3+11, 2);
    index += 2;
    result[index++] = ' ';

    std::strncpy(result+index, src4+4, 4);
    index += 4;
    result[index++] = '\0';
    
    std::cout << "result : " << result;
    
    //Your code will go above this line
    //Don't modify anything below this line

    delete[] result;
}

void extract_message_fixed(const char *src1, const char *src2, const char *src3, const char *src4) {
    char* result = new char[20]{}; // 동적 할당 및 초기화
    int index = 0; // 문자열 추가할 위치

    std::strncpy(result + index, src1 + 15, 3); // "the"
    index += 3;
    result[index++] = ' ';

    std::strncpy(result + index, src2 + 6, 3); // "sky"
    index += 3;
    result[index++] = ' ';

    std::strncpy(result + index, src3 + 11, 2); // "is"
    index += 2;
    result[index++] = ' ';

    std::strncpy(result + index, src4 + 4, 4); // "blue"
    index += 4;
    result[index] = '\0';  // 문자열 종료

    std::cout << "result : " << result << std::endl;

    delete[] result;
}

int main() {
    const char src1[] {"will old space the replace"};
    const char src2[] {"sense sky  hit has"};
    const char src3[] {"hello went is get"};
    const char src4[] {"red blue yellow orange"};

    extract_message2(src1, src2, src3, src4);

    return 0;
}
