#include <iostream>
#include <experimental/generator>

std::experimental::generator<int> foo()
{
	std::cout << "begin" << std::endl;
	for (int i = 0; i < 10; i++) {
		co_yield i;
	}
	std::cout << "end" << std::endl;
}

int main()
{
	for (auto i : foo()) {
		std::cout << i << std::endl;
	}
}
