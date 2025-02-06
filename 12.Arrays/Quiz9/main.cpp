#include <iostream>

void unique_numbers( int numbers[], unsigned int collection_size){
    
   //Don't modify anthing above this line
   //Your code should go below this line
    
    constexpr size_t RESULT_SIZE{20};
    int result[RESULT_SIZE]{};
    size_t result_idx{}; 
    
    for (size_t i{}; i < collection_size; ++i) {
        bool exists{false};
        for (size_t j{}; j < RESULT_SIZE; ++j) {
            if (numbers[i] == result[j]) {
                exists = true;
                break;
            }
        }
        if (!exists)
            result[result_idx++] = numbers[i];
    }
    
    std::cout << "The collection contains " << result_idx << " unique numbers, they are : ";
    for (size_t i{}; i < result_idx; ++i) {
        std::cout << result[i] << " ";
    }
    
  
  //Your code should go above this line
  //Don't modify anything below this line
}

int main() {
    int numbers[12]{1,2,4,5,1,8,2,3,6,1,4,2};
    unique_numbers(numbers, sizeof(numbers)/sizeof(int));
    return 0;
}