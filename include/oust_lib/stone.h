#ifndef _stone_h
#define _stone_h

class Stone {
public:
	Stone(int x, int y);
	~Stone();
	void set_x(int x);
	void set_y(int y);
	const int x() const { return x_; };
	const int y() const { return y_; };

private:
	int x_;
	int y_;


};
#endif