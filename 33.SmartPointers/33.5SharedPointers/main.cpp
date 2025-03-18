#include <iostream>
#include <memory>
#include "dog.h"

int main(int argc, char** argv) {
    std::shared_ptr<int> int_ptr_1 {new int{4}};
    std::cout << "int_ptr_1 value : " << *int_ptr_1 << ", .get() : " << int_ptr_1.get() << ", &int_ptr_1 : " << &int_ptr_1 << std::endl;
    std::cout << "\t referencing count : " << int_ptr_1.use_count() << std::endl;

    std::shared_ptr<int> int_ptr_2{int_ptr_1};
    std::cout << "int_ptr_2 value : " << *int_ptr_2 << ", .get() : " << int_ptr_2.get() << ", &int_ptr_2 : " << &int_ptr_2 << std::endl;
    std::cout << "\t referencing count : " << int_ptr_2.use_count() << std::endl;

    int_ptr_1.reset();
    std::cout << "int_ptr_1 reset......." << std::endl;
    // std::cout << "int_ptr_1 value : " << *int_ptr_1 << ", .get() : " << int_ptr_1.get() << ", &int_ptr_1 : " << &int_ptr_1 << std::endl;
    std::cout << "int_ptr_1 , .get() : " << int_ptr_1.get() << ", &int_ptr_1 : " << &int_ptr_1 << std::endl;
    std::cout << "\t referencing count : " << int_ptr_1.use_count() << std::endl;
    std::cout << "int_ptr_2 value : " << *int_ptr_2 << ", .get() : " << int_ptr_2.get() << ", &int_ptr_2 : " << &int_ptr_2 << std::endl;
    std::cout << "\t referencing count : " << int_ptr_2.use_count() << std::endl;

    std::shared_ptr<int> int_ptr_3{nullptr};
    std::cout << "int_ptr_3 = nullptr......." << std::endl;
    // std::cout << "int_ptr_3 value : " << *int_ptr_3 << ", .get() : " << int_ptr_3.get() << ", &int_ptr_3 : " << &int_ptr_3 << std::endl;
    std::cout << "int_ptr_3 .get() : " << int_ptr_3.get() << ", &int_ptr_3 : " << &int_ptr_3 << std::endl;
    std::cout << "\t referencing count : " << int_ptr_3.use_count() << std::endl;

    int_ptr_3 = int_ptr_2;
    std::cout << "assign int_ptr_3 = int_ptr_2......" << std::endl;
    std::cout << "int_ptr_3 value : " << *int_ptr_3 << ", .get() : " << int_ptr_3.get() << ", &int_ptr_3 : " << &int_ptr_3 << std::endl;
    std::cout << "\t referencing count : " << int_ptr_3.use_count() << std::endl;

    std::shared_ptr<int> int_ptr_5{int_ptr_3};
    std::cout << "initialize int_ptr_5 to int_ptr_3....." << std::endl;
    std::cout << "int_ptr_3 value : " << *int_ptr_3 << ", .get() : " << int_ptr_3.get() << ", &int_ptr_3 : " << &int_ptr_3 << std::endl;
    std::cout << "\t referencing count : " << int_ptr_3.use_count() << std::endl;
    std::cout << "int_ptr_5 value : " << *int_ptr_5 << ", .get() : " << int_ptr_5.get() << ", &int_ptr_5 : " << &int_ptr_5 << std::endl;
    std::cout << "\t referencing count : " << int_ptr_5.use_count() << std::endl;

    *int_ptr_5 = 70;
    std::cout << "use derefencing to change value........" << std::endl;
    std::cout << "int_ptr_5 value : " << *int_ptr_5 << ", .get() : " << int_ptr_5.get() << ", &int_ptr_5 : " << &int_ptr_5 << std::endl;
    std::cout << "\t referencing count : " << int_ptr_5.use_count() << std::endl;

    std::shared_ptr<int> int_ptr_6 = std::make_shared<int>(80);
    std::cout << "use make_ptr new value......." << std::endl;
    std::cout << "int_ptr_6 value : " << *int_ptr_6 << ", .get() : " << int_ptr_6.get() << ", &int_ptr_6 : " << &int_ptr_6 << std::endl;
    std::cout << "\t referencing count : " << int_ptr_6.use_count() << std::endl;

    std::shared_ptr<int> int_ptr_7{std::move(int_ptr_6)};
    std::cout << "move int_ptr_6 to 7 using release()......." << std::endl;
    std::cout << "int_ptr_6  .get() : " << int_ptr_6.get() << ", &int_ptr_6 : " << &int_ptr_6 << std::endl;
    std::cout << "\t referencing count : " << int_ptr_6.use_count() << std::endl;
    std::cout << "int_ptr_7 value : " << *int_ptr_7 << ", .get() : " << int_ptr_7.get() << ", &int_ptr_7 : " << &int_ptr_7 << std::endl;
    std::cout << "\t referencing count : " << int_ptr_7.use_count() << std::endl;

    std::unique_ptr<int> int_uniq_ptr_1 = std::make_unique<int>(1);
    std::unique_ptr<int> int_uniq_ptr_2{int_uniq_ptr_1.release()};

    std::cout << std::endl << std::endl << std::endl;

    // std::shared_ptr<Dog> dog_ptr_1 = new Dog{"Snoopy1"}; // error
    std::shared_ptr<Dog> dog_ptr_1{new Dog{"Snoopy1"}};
    // std::shared_ptr<Dog> dog_ptr_2 = std::make_shared<Dog>(dog_ptr_1); // error
    std::shared_ptr<Dog> dog_ptr_2 = std::make_shared<Dog>(*dog_ptr_1);
    std::cout << "dog_ptr_1 name : " << (*dog_ptr_1).getName() << ", *dog_ptr_1.get() : " << dog_ptr_1.get() << ", &dog_ptr_1 : " << &dog_ptr_1 << std::endl;
    std::cout << "\t referencing count : " << dog_ptr_1.use_count() << std::endl;
    std::cout << "dog_ptr_2 name : " << (*dog_ptr_2).getName() << ", *dog_ptr_2.get() : " << dog_ptr_2.get() << ", &dog_ptr_2 : " << &dog_ptr_2 << std::endl;
    std::cout << "\t referencing count : " << dog_ptr_2.use_count() << std::endl;

    return 0;
}