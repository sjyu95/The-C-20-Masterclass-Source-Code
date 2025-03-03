#ifndef EXERCISE_H
#define EXERCISE_H

//YOUR CODE WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE.

class Box {
public:
    int m_width{1};
    int m_length{1};
    int m_height{1};
    
    int base_area() {
        return (m_width * m_length);
    }
    int volume() {
        return m_width * m_length * m_height;
    }
};


//YOUR CODE WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE

#endif // _EXERCISE_H
