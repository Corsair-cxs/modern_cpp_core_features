#include <iostream>
#include <string>

struct BindTest {
	int a = 42;
	std::string b = "hello structured binding";
};

int main()
{
	BindTest bt;
	auto[x, y] = bt;
	std::cout << "x=" << x << " y=" << y << std::endl;
}
