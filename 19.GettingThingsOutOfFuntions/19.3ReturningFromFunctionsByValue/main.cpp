#include <iostream>

// declairation - function prototype
void max_str(const std::string& in1, const std::string& in2, std::string& out);
void max_int(int in1, int in2, int& out);
void max_double(double in1, double in2, double * out);

int main(int argc, char** argv){
    std::string in_str1{"aaa"};
    std::string in_str2{"bbb"};
    std::string out_str{};

    max_str(in_str1, in_str2, out_str);
    std::cout << "max_str is " << out_str << std::endl;

    int in_int1{2}, in_int2{3}, out_int{};
    max_int(in_int1, in_int2, out_int);
    std::cout << "max_int is " << out_int << std::endl;

    double in_double1{3.3}, in_double2{1.1}, out_double{};
    max_double(in_double1, in_double2, &out_double);
    std::cout << "max_double is " << out_double << std::endl;

    return 0;
}

// definition
void max_str(const std::string& in1, const std::string& in2, std::string& out) {
    if (in1 > in2) {
        out = in1;
    } else {
        out = in2;
    }
}

void max_int(int in1, int in2, int& out) {
    if (in1 > in2) {
        out = in1;
    } else {
        out = in2;
    }
}

void max_double(double in1, double in2, double * out) {
    if (in1 > in2) {
        *out = in1;
    } else {
        *out = in2;
    }
}