#ifndef _stone_h
#define _stone_h

class Stone {
public:
	Stone(int x, int y);
	~Stone();
	void set_x(int x);
	void set_y(int y);
	int x() { return x_; };
	int y() { return y_; };

private:
	int x_;
	int y_;


};
#endif