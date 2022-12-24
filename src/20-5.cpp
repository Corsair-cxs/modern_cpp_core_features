#include <iostream>
#include <string>

struct BindTest {
	int a = 42;
	std::string b = "hello structured binding";
};

int main()
{
	BindTest bt;
	const auto[x, y] = bt;

	std::cout << "&bt.a=" << &bt.a << " &x=" << &x << std::endl;
	std::cout << "&bt.b=" << &bt.b << " &y=" << &y << std::endl;
	std::cout << "std::is_same_v<const int, decltype(x)>=" 
		<< std::is_same_v<const int, decltype(x)> << std::endl;
	std::cout << "std::is_same_v<const std::string, decltype(y)>=" 
		<< std::is_same_v<const std::string, decltype(y)> << std::endl;
}

/*

int main()
{
	BindTest bt;
	auto&[x, y] = bt;

	std::cout << "&bt.a=" << &bt.a << " &x=" << &x << std::endl;
	std::cout << "&bt.b=" << &bt.b << " &y=" << &y << std::endl;
	
	x = 11;
	std::cout << "bt.a=" << bt.a << std::endl;
	bt.b = "hi structured binding";
	std::cout << "y=" << y << std::endl;
}

*/