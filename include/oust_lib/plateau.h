#ifndef _plateau_h_
#define _plateau_h_
#include <vector>
#include <oust_lib/stone.h>

class Plateau {
	public:
		Plateau(int line, int colum);
		~Plateau();
		void add_stone(Stone a_stone); 
		void remove_stone(Stone a_stone);
	
	
	private:
		int line_;
		int colum_;
		std::vector<std::vector<Stone>> plateau_;


};


#endif 