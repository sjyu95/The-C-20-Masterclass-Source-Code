#include <iostream>
class One {
    public :
    One(int one ) : m_1 (one){
    }
    void print() const{
        std::cout <<"data [one:" << m_1
            << "]" ;
    }

    protected :
        int m_1{};
};

class Two : public One{
    public :
    Two(int one, int two) : One(one), m_2(two) {
    }

    void print() const{
        std::cout <<"data [one:" << m_1
            << " two:" << m_2
            << "]" ;
    }

    protected :
        int m_2{};
};

class Three : public Two{
    public :

    Three( int one, int two, int three) : Two(one,two) , m_3(three){
    }



    void print() const{
        std::cout <<"data [one:" << m_1
                 << " two:" << m_2
                 << " three:" << m_3 << "]" ;
    }
    protected:
        int m_3{};
};


// int main()
// {
//     One one(1);
//     Two two(10,20);
//     Three three(100,200,300);

//     One * base{};

//     base = &one;
//     base->print();
//     std::cout << "\n";

//     base = &two;
//     base->print();
//     std::cout << "\n";

//     base = &three;
//     base->print();

//     return 0;
// }

int main()
{
    One one(1);
    Two two(10,20);
    Three three(100,200,300);

	One& base1 = one;
	base1.print();
	std::cout << "\n";

	One& base2 = two;
	base2.print();
	std::cout << "\n";

	One& base3 = three;
	base3.print();

    return 0;
}