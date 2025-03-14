#include <iostream>
const double ADJUST{2.1};

namespace Adjustment {
    double Add(double a, double b) {
        return a+b+ADJUST;
    }
    double Mul(double a, double b);
}

namespace NoAdjustment {
    double Add(double a, double b) {
        return a+b;
    }
    double Mul(double a, double b);
}

int main(int argc, char** argv) {
    auto result = Adjustment::Add(1,2);
    std::cout << "Adjustment::Add is " << result << std::endl;

    result = NoAdjustment::Mul(1,2);
    std::cout << "NoAdjustment::Mul is " << result << std::endl;
    return 0;
}

namespace Adjustment {
    double Mul(double a, double b) {
        return a*b*ADJUST;
    }
}

namespace NoAdjustment {
    double Mul(double a, double b) {
        return a*b;
    }
}
