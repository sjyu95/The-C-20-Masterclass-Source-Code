#include <iostream>

void insertion_sort(int * array, unsigned int size){
//YOUR CODE WILL GO BELOW THIS LINE 
//DON'T MODIFY ANYTHING ABOVE THIS LINE

    int key{};
    
    for (int i{1}, j{i}; i < size; i++) {
        key = array[i];
        j = i-1;
        while (j >= 0 && array[j] > key) {
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }

//YOUR CODE WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE
}

void print_array(int* arr, unsigned int n) 
{ 
    for (unsigned int i = 0; i < n; i++){
        std::cout << arr[i] << " "; 
    }
    std::cout << std::endl;
}