#ifndef OUTER_H
#define OUTER_H

class Outer{
public:
    Outer(int intVar, double doubleVar);

    inline static int CALL_COUNT{};

    void doSomething();

private:
    int m_intVar{};
    double m_doubleVar{};

    class Inner{
        public:
            Inner(double inner);
            double getInnerValue();
            void doSomethingWithOuter(Outer* outer);
        private:
            double m_innerVar{};
    };
};

#endif