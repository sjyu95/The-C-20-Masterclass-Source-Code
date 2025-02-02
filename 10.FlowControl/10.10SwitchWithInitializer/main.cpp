#include <iostream>

constexpr int pen{10}, marker{20}, erasier{30};
constexpr int retangle{100}, triangle{200}, ellipse{300};
    
int main(){
     //int tool{marker};

     //switch (int strength{30};tool) {
     switch (int strength{30}, tool{marker}; tool) {
          case pen: {
               std::cout << "Active tool is pen. Strength is " << strength << std::endl;
          }
          break;
          
          case marker: {
               std::cout << "Active tool is marker. Strength is " << strength << std::endl;
          }
          break;

          case erasier: {
               std::cout << "Active tool is erasier. Strength is " << strength << std::endl;
          }
          break;

          case retangle:
          case triangle:
          case ellipse: {
               std::cout << "drawing shape" << std::endl;
          }
          break;

          default: {
               std::cout << "no found match" << std::endl;
          }
     }

    std::cout << "Moving on " << std::endl;

    return 0;
}