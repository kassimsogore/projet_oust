#ifndef _stone_white_h
#define _stone_white_h
#include <string>
#include <oust_lib/stone.h>

class Stone_white:public Stone{
	public:
		Stone_white(int x, int y, std::string& color);
		~Stone_white();
		const std::string& color(){return color_;};
		int type();
	private:
		std::string color_;
		int type_stone_;

};

#endif
