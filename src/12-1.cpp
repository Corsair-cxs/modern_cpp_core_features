class X
{
public:
	X() : a_(0), b_(0.) { CommonInit(); }
	X(int a) : a_(a), b_(0.) { CommonInit(); }
	X(double b) : a_(0), b_(b) { CommonInit(); }
	X(int a, double b) : a_(a), b_(b) { CommonInit(); }
private:
	void CommonInit() {}
	int a_;
	double b_;
};

class X1
{
public:
	X1() { CommonInit(0, 0.); }
	X1(int a) { CommonInit(a, 0.); }
	X1(double b) { CommonInit(0, b); }
	X1(int a, double b) { CommonInit(a, b); }
private:
	void CommonInit(int a, double b)
	{
		a_ = a;
		b_ = b;
	}
	int a_;
	double b_;
};

class X2
{
public:
	X2() { CommonInit(0, 0.); }
	X2(int a) { CommonInit(a, 0.); }
	X2(double b) { CommonInit(0, b); }
	X2(int a, double b) { CommonInit(a, b); }
private:
	void CommonInit(int a, double b)
	{
		a_ = a;
		b_ = b;
		c_ = "hello world";
	}
	int a_;
	double b_;
	std::string c_;
};

class X3
{
public:
	X3(double b) : a_(0), b_(b) { CommonInit(); }
	X3(int a = 0, double b = 0.) : a_(a), b_(b) { CommonInit(); }
private:
	void CommonInit() {}
	int a_;
	double b_;
};
