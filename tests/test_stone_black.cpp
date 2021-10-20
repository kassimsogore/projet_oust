#include <oust_lib/stone_black.h>
#include <iostream>
#include <string>

int main(){
	std::string k("red");
	Stone_black stone_b01(1,2,k);
	std::cout << "x = " << stone_b01.x() << std::endl;
	std::cout << "y = " << stone_b01.y() << std::endl;
	std::cout << "color = " << stone_b01.color() << std::endl;
	return 0;
}