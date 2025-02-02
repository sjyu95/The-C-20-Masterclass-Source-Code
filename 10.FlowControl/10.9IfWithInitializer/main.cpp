#include <iostream>

int main(){
	bool go{false};

	if (int speed{40}, a{1}; go) {
		if (speed > 30) {
			std::cout << "Slow down. speed limit is 30, but your speed is " << speed << std::endl;
		}
		else {
			std::cout << "Go. Your speed " << speed << " is good." << std::endl; 
		}
	}
	else {
		std::cout << "Stop. Your speed is " << speed << std::endl; 
	}

	return 0;
}