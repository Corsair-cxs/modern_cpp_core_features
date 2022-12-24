#include <iostream>
#include <string>

void(*fp)() noexcept = nullptr;
void foo() 
{
	throw(5);
}

int main()
{
	fp = &foo;
	try {
		fp();
	}
	catch (int e)
	{
		std::cout << e << std::endl;
	}
}
