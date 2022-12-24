class X
{
public:
	X() : X(0) {}
	X(int a) : X(a, 0.) {}
	X(double b) : X(0, b) {}
	X(int a, double b) : a_(a), b_(b) { CommonInit(); }
	X(const X &other) : X(other.a_, other.b_) {}		// 委托拷贝构造函数
private:
	void CommonInit() {}
	int a_;
	double b_;
};
