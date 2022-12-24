#include <iostream>
#include <string>

template<class... Args>
auto sum(Args ...args)
{
	return (args + ...);
}

int main()
{
	std::cout << sum(std::string("hello "), "c++ ", "world") << std::endl;	// 编译错误
}
