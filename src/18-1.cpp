#include <iostream>
bool foo()
{
	return true;
}
int main()
{
	if (bool b = foo(); b) {
		std::cout << std::boolalpha << "good! foo()=" << b << std::endl;
	}
}
