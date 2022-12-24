class X {
public:
	X() : a_(0), b_(0.), c_("hello world") {}
	X(int a) : a_(a), b_(0.), c_("hello world") {}
	X(double b) : a_(0), b_(b), c_("hello world") {}
	X(const std::string &c) : a_(0), b_(0.), c_(c) {}

private:
	int a_;
	double b_;
	std::string c_;
};

/*

class X {
public:
	X() {}
	X(int a) : a_(a) {}
	X(double b) : b_(b) {}
	X(const std::string &c) : c_(c) {}

private:
	int a_ = 0;
	double b_{ 0. };
	std::string c_{ "hello world" };
};

*/