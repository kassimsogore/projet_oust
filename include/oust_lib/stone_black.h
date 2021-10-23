#ifndef _stone_black_h
#define _stone_black_h
#include <oust_lib/stone.h>
#include <string>

class Stone_black: public Stone{
	public:
		Stone_black(int x, int y, std::string& color);
		~Stone_black();
		const std::string& color(){return color_;};
		int type();
	private:
		std::string color_;
		int type_stone_;
	

};



#endif