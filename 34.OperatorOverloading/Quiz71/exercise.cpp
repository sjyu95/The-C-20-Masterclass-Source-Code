#include "exercise.h"

//YOUR CODE MAY ALSO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE

namespace CU {
    Point_nD operator+(const Point_nD& left, const Point_nD& right){
        Point_nD tmp{left};
        for(unsigned int i{} ;  i < left.size(); ++i){
            tmp.set(i, tmp.at(i) + right.at(i));
        }
        return tmp;
    }
}
//YOUR CODE MAY ALSO GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE