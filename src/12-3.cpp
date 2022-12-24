class X
{
public:
	X() : X(0, 0.) {}
	X(int a) : X(a, 0.) {}
	X(double b) : X(0, b) {}
	X(int a, double b) : a_(a), b_(b) { CommonInit(); }
private:
	void CommonInit() {}
	int a_;
	double b_;
};
