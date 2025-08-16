#ifndef ADD_1_H
#define ADD_1_H

class Add_1 {
public:
    double operator() (double src) { // functor
        return src+1;
    }
};

#endif