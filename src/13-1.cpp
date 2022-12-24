class Base {
public:
	Base() : x_(0), y_(0.) {};
	Base(int x, double y) : x_(x), y_(y) {}
	Base(int x) : x_(x), y_(0.) {}
	Base(double y) : x_(0), y_(y) {}
	void SomeFunc() {}
private:
	int x_;
	double y_;
};


class Derived : public Base {
public:
	Derived() {};
	Derived(int x, double y) : Base(x, y) {}
	Derived(int x) : Base(x) {}
	Derived(double y) : Base(y) {}
	void SomeFunc() {}
};
