#include <iostream>

template<class T, std::size_t N>
struct MyCountOf
{
	MyCountOf(T(&)[N]) {}
	std::size_t value = N;
};

int main()
{
	MyCountOf c("hello");
	std::cout << c.value << std::endl;
}
