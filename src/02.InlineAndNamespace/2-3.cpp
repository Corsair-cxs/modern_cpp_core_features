#include <iostream>

namespace Parent {
void foo() { std::cout << "foo v1.0" << std::endl; }
}

int main()
{
	Parent::foo();
}
