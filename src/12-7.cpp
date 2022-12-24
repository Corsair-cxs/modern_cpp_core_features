class X
{
public:
	X() : a_(0), b_(0) { CommonInit(); }
	X(int a) : X(), a_(a) {}		// 编译错误，委托构造函数不能在初始化列表初始化成员变量
	X(double b) : X(), b_(b) {}	    // 编译错误，委托构造函数不能在初始化列表初始化成员变量

private:
	void CommonInit() {}
	int a_;
	double b_;
};
