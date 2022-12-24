#include <iostream>
bool foo()
{
	return false;
}
bool bar()
{
	return true;
}
int main()
{
	if (bool b = foo(); b) {
		std::cout << std::boolalpha << "foo()=" << b << std::endl;
	}
	else if (bool b1 = bar(); b1) {
		std::cout << std::boolalpha 
			<< "foo()=" << b
			<< ", bar()=" << b1 << std::endl;
	}
}
