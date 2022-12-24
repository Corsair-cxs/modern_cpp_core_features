#include <iostream>

template<class... Args>
auto sum(Args ...args)
{
	return (args + ...);
}

int main()
{
	std::cout << sum(1, 5.0, 11.7) << std::endl;
}
