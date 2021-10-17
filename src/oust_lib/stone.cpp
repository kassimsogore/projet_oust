#include <iostream>
#include <oust_lib/stone.h>

Stone::Stone(int x, int y):x_(x),y_(y){
	//std::cout<< "Constructing a stone" << std::endl;
}

Stone::~Stone(){
	//std::cout << "Destructing a stone" << std::endl;
}

void Stone::set_x(int x){
	x_ = x;
}

void Stone::set_y(int y){
	y_ = y;
}