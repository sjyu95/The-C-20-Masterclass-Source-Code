#include <initializer_list>
#include <iostream>

class Reverser {
    public:
        Reverser(std::initializer_list<int> list) {
            for (size_t i{}; i < ARRAY_SIZE; i++) {
                m_array[i] = *(list.end() - (i + 1));
            }
        }
        
        static const size_t ARRAY_SIZE = 5;
        
        void print() const {
            std::cout << "Collection [";
            
            for (size_t i{}; i < ARRAY_SIZE; i++) {
                std::cout << m_array[i] << " ";
            }
            
            std::cout << "]";
        }
    
    private:
        int m_array[ARRAY_SIZE]{};
    };

    int main(int argc, char** argv) {
        Reverser r{7,4,1,9,6};
        r.print();

        return 0;
    }
    