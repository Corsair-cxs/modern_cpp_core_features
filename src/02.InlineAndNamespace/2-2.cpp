#include <iostream>

namespace Parent {
	namespace Child1
	{
		void foo() { std::cout << "Child1::foo()" << std::endl; }
	}
	
	inline namespace Child2
	{
		void foo() { std::cout << "Child2::foo()" << std::endl; }
	}
}

int main()
{
	Parent::Child1::foo();
	Parent::foo();
}
