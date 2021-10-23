#include <oust_lib/stone_white.h>
#include <iostream>
#include <string>

int main(){
	std::string k("white");
	Stone_white stone_w01(1,2,k);
	std::cout << "x = " << stone_w01.x() << std::endl;
	std::cout << "y = " << stone_w01.y() << std::endl;
	std::cout << "color = " << stone_w01.color() << std::endl;
	std::cout << "type = " << stone_w01.type() << std::endl;
	return 0;
}