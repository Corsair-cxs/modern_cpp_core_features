#include <iostream>

template<auto N> // C++17
void f()
{
	std::cout << N << std::endl;
}

int main()
{
	f<5>();     // N为int类型
	f<'c'>();   // N为char类型
	f<50>();   // 编译失败，模板参数不能为double
}
