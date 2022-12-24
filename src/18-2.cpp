#include <iostream>
bool foo()
{
	return true;
}
int main()
{
	{
		bool b = foo();
		if (b) {
			std::cout << std::boolalpha << "good! foo()=" << b << std::endl;
		}
	}
}
