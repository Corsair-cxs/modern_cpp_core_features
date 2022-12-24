#include <iostream>
template<decltype(auto) N>
void f()
{
	std::cout << N << std::endl;
}

static const int x = 11;
static int y = 7;

int main()
{
	f<x>();		// N为const int类型
	f<(x)>();	// N为const int&类型
    f<y>();		// 编译错误
	f<(y)>();	// N为int&类型
}
