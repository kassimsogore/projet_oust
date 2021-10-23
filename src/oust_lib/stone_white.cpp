#include <oust_lib/stone_white.h>
Stone_white::Stone_white(int x, int y, std::string& color):Stone(x,y),color_(color),type_stone_(1){

}

Stone_white::~Stone_white(){

}

int Stone_white::type(){
	return type_stone_;
}
