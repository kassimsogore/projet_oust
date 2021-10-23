#ifndef _stone_h
#define _stone_h
#include <iostream>

class Stone {
	public:
		Stone(int x, int y);
		~Stone();
		void set_x(int x);
		void set_y(int y);
		const int x() const { return x_; };
		const int y() const { return y_; };
		virtual int type() { 
			std::cout << "This must not happen" << std::endl;
			return -9999; 
		};

	private:
		int x_;
		int y_;

};
#endif