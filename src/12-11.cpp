#include <iostream>

class X
{
public:
	X() try : X(0) {}
	catch (int e)
	{
		std::cout << "catch: " << e << std::endl;
		throw 3;
	}
	X(int a) try : X(a, 0.) {}
	catch (int e)
	{
		std::cout << "catch: " << e << std::endl;
		throw 2;
	}
	X(double b) : X(0, b) {}
	X(int a, double b) : a_(a), b_(b) { throw 1; }
private:
	int a_;
	double b_;
};

int main()
{
	try {
		X x;
	}
	catch (int e) {
		std::cout << "catch: " << e << std::endl;
	}
}
