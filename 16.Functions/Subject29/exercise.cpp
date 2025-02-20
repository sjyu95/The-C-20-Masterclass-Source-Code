
int max_subsequence_sum(int sequence[] , unsigned int size){
    //YOUR CODE WILL GO BELOW THIS LINE 
    //DON'T MODIFY ANYTHING ABOVE THIS LINE
    
    int result{}; // no unsigned
    
    for (size_t left{0}; left < size; left++) {
        for (size_t right{left}; right < size; right++) {
            int sum{};
            for (size_t i{left}; i <= right; i++) {
                sum += sequence[i];
            }
                
            if (result < sum) {
                result = sum; // if result is unsigned, worng.
            }        
        }
    }    
    
    return result;
   
    //YOUR CODE WILL GO ABOVE THIS LINE
    //DON'T MODIFY ANYTHING BELOW THIS LINE 
}

