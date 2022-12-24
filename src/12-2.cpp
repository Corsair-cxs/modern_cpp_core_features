class X4
{
public:
	X4(int c) : a_(0), b_(0.), c_(c) { CommonInit(); }
	X4(double b) : a_(0), b_(b), c_(0) { CommonInit(); }
	X4(int a = 0, double b = 0., int c = 0) : a_(a), b_(b), c_(c) { CommonInit(); }
private:
	void CommonInit() {}
	int a_;
	double b_;
	int c_;
};

int main()
{
	X4 x4(1);
}
