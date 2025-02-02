#include <iostream>

int main(){
     int condition{0};

     switch(condition) {
          case 0:
               int x;
               // int x{0};
               std::cout << "statement 1" << std::endl;
               std::cout << "statement 1" << std::endl;
               break;
          case 1:
               {
                    int y;
                    x = 1;
                    ++x;
                    std::cout << "statement 1" << std::endl;
                    std::cout << "statement 1" << std::endl;
                    break;
               }
          default:
               // y++;
               std::cout << "statement 1" << std::endl;
               std::cout << "statement 1" << std::endl;
     }

     return 0;
}