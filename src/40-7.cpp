#include <iostream>

template <int I> void foo(char(*)[I % 2 == 0] = 0) {
	std::cout << "I % 2 == 0" << std::endl;
}
template <int I> void foo(char(*)[I % 2 == 1] = 0) {
	std::cout << "I % 2 == 1" << std::endl;
}

int main()
{
	char a[1];
	foo<1>(&a);
	foo<2>(&a);
	foo<3>(&a);
}
