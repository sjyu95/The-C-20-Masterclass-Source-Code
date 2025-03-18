#include <iostream>
#include "dog.h"

int main(int argc, char** argv) {
    int arr[]{1,2,3};
    for (size_t i{}; i < std::size(arr); i++) {
        std::cout << "int arr [" << i << "] : " << arr[i] << std::endl;
    }

    Dog dogArr[]{Dog{"Snoopy1"}, Dog{"Snoopy2"}, Dog{"Snoopy3"}};
    for (size_t i{}; i < std::size(arr); i++) {
        std::cout << "dogArr [" << i << "] : " << dogArr[i].getName() << std::endl;
    }

    // Dog* pDogArr = new Dog[3]{};
    Dog* pDogArr = new Dog[3]{Dog{"Snoopy11"}, Dog{"Snoopy12"}, Dog{"Snoopy13"}};
    for (size_t i{}; i < 3; i++) {
        std::cout << "pDogArr [" << i << "] : " << pDogArr[i].getName() << std::endl;
    }
    delete[] pDogArr;

    std::unique_ptr<Dog[]> pDogUniquePtrArr = std::unique_ptr<Dog[]>(new Dog[3]{Dog{"Snoopy21"}, Dog{"Snoopy22"}, Dog{"Snoopy23"}});
    for (size_t i{}; i < 3; i++) {
        std::cout << "pDogUniquePtrArr [" << i << "] : " << pDogUniquePtrArr[i].getName() << std::endl;
    }

    auto pDogMakeUniquePtrArr = std::make_unique<Dog[]>(3);
    for (size_t i{}; i < 3; i++) {
        pDogMakeUniquePtrArr[i].setName("Snoopy3");
        std::cout << "pDogMakeUniquePtrArr [" << i << "] : " << pDogMakeUniquePtrArr[i].getName() << std::endl;
    }
    return 0;
}