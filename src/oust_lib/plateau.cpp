#include <oust_lib/plateau.h>

Plateau::Plateau(int line, int colum) :line_(line), colum_(colum) {
		//std::cout << "Constructing an object Plateau" << std::endl;
		Stone st(0, 0);
		std::vector<Stone> vec_inside(line_, st);
		plateau_ = std::vector< std::vector<Stone> > (colum_,vec_inside);
}

Plateau::~Plateau(){
	
}

void Plateau::add_stone(Stone a_stone){

}

void Plateau::remove_stone(Stone a_stone){

}
