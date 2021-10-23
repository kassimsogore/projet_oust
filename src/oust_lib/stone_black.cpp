#include <oust_lib/stone_black.h>
Stone_black::Stone_black(int x, int y, std::string& color):Stone(x,y),color_(color),type_stone_(2){
}

Stone_black::~Stone_black(){

}

int Stone_black::type(){
	return type_stone_;
}
