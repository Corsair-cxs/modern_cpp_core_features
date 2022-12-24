class Base {
public:
	Base() : x_(0), y_(0.) {};
	Base(int x, double y) : x_(x), y_(y) {}
	Base(int x) : x_(x), y_(0.) {}
	Base(double y) : x_(0), y_(y) {}
private:
	int x_;
	double y_;
};


class Derived : public Base {
public:
	using Base::Base;
};
