#include <iostream>

class X
{
public:
	X() : X(0) { InitStep3(); }
	X(int a) : X(a, 0.) { InitStep2(); }
	X(double b) : X(0, b) {}
	X(int a, double b) : a_(a), b_(b) { InitStep1(); }
private:
	void InitStep1() { std::cout << "InitStep1()" << std::endl; }
	void InitStep2() { std::cout << "InitStep2()" << std::endl; }
	void InitStep3() { std::cout << "InitStep3()" << std::endl; }
	int a_;
	double b_;
};

int main()
{
	X x;
}
