#include <iostream>

constexpr int pen{10}, marker{20}, erasier{30};
constexpr int retangle{100}, triangle{200}, ellipse{300};
    
int main(){
    int tool{retangle};

     switch (tool) {
          case pen: {
               std::cout << "Active tool is pen." << std::endl;
          }
          break;
          
          case marker: {
               std::cout << "Active tool is marker." << std::endl;
          }
          break;

          case erasier: {
               std::cout << "Active tool is erasier." << std::endl;
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