#include <iostream>
#include <limits>

int main(){

    std::cout << "int size: " << sizeof(int) << ", range from " << std::numeric_limits<int>::min() 
        << " to " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "unsigned int size: " << sizeof(unsigned int) << ", range from " << std::numeric_limits<unsigned int>::min() 
        << " to " << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "short int size: " << sizeof(short int) << ", range from " << std::numeric_limits<short int>::min() 
        << " to " << std::numeric_limits<short int>::max() << std::endl;
    std::cout << "long int size: " << sizeof(long int) << ", range from " << std::numeric_limits<long int>::min() 
        << " to " << std::numeric_limits<long int>::max() << std::endl;
    std::cout << "long long int size: " << sizeof(long long int) << ", range from " << std::numeric_limits<long long int>::min() 
        << " to " << std::numeric_limits<long long int>::max() << std::endl;
    std::cout << "unsigned long long int size: " << sizeof(unsigned long long int) << ", range from " << std::numeric_limits<unsigned long long int>::min() 
        << " to " << std::numeric_limits<unsigned long long int>::max() << std::endl;

    std::cout << "float size: " << sizeof(float) << ", range from " << std::numeric_limits<float>::min()
        << " to " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "double size: " << sizeof(double) << ", range from " << std::numeric_limits<double>::min()
        << " to " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "long double size: " << sizeof(long double) << ", range from " << std::numeric_limits<long double>::min()
        << " to " << std::numeric_limits<long double>::max() << std::endl;

    std::cout << "isdigit is " << std::numeric_limits<int>::digits << std::endl;
    
    return 0;
}